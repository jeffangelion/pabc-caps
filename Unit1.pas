unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
    capnumber = 1..3;

var
    debug: boolean = true;
    caps: array [capnumber] of boolean;
    wins, tries: biginteger;
    {$resource 'cap.png'}
    {$resource 'cap_full.png'}
    {$resource 'cap_empty.png'}
    cap, cap_full, cap_empty: Bitmap;

type
    Form1 = class(Form)
        procedure cap1_Click(sender: Object; e: EventArgs);
        procedure cap2_Click(sender: Object; e: EventArgs);
        procedure cap3_Click(sender: Object; e: EventArgs);
        function answer(num: capnumber): boolean;
        function setCap(win: boolean): Image;
        procedure start();
        procedure win();
        procedure lose();
        procedure count();
        procedure Form1_Load(sender: Object; e: EventArgs);
    {$region FormDesigner}
    private 
        {$resource Unit1.Form1.resources}
        counter: &Label;
        cap1: PictureBox;
        cap2: PictureBox;
        cap3: PictureBox;
        title: &Label;
    {$include Unit1.Form1.inc}
    {$endregion FormDesigner}
    public 
        constructor;
        begin
            InitializeComponent;
            cap := new Bitmap(Image.FromStream(GetResourceStream('cap.png')));
            cap_full := new Bitmap(Image.FromStream(GetResourceStream('cap_full.png')));
            cap_empty := new Bitmap(Image.FromStream(GetResourceStream('cap_empty.png')));
        end;
    end;

implementation

function Form1.answer(num: capnumber): boolean;
begin
    if caps[num] = true
        then
        win()
    else
        lose();
    result := caps[num];
    cap1.Image := cap;
    cap2.Image := cap;
    cap3.Image := cap;
    sleep(300);
    start();
end;

procedure Form1.start();
begin
    tries += 1;
    for var i := 1 to 3 do caps[i] := false;
    if (debug) then
    begin
        var rand: 1..3;
        rand := PABCSystem.Random(1, 3);
        caps[rand] := true;
        title.text := rand.ToString;
    end
    else
    begin
        caps[PABCSystem.Random(1, 3)] := true;
    end;
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
    start();
end;

procedure Form1.win();
begin
    wins += 1;
    count();
end;

procedure Form1.lose();
begin
    count();
end;

procedure Form1.count();
begin
    counter.text := 'Вы выиграли ' + wins.ToString + '/' + tries.ToString + ' раз';
end;

procedure Form1.cap1_Click(sender: Object; e: EventArgs);
begin
    cap1.Image := setCap(answer(1));
end;

procedure Form1.cap2_Click(sender: Object; e: EventArgs);
begin
    cap2.Image := setCap(answer(2));
end;

procedure Form1.cap3_Click(sender: Object; e: EventArgs);
begin
    cap3.Image := setCap(answer(3));
end;

function Form1.setCap(win: boolean): Image;
begin
    if (win) then result := cap_full else result := cap_empty;
end;

end.
