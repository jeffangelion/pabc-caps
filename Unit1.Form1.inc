procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.title := new System.Windows.Forms.Label();
        self.counter := new System.Windows.Forms.Label();
        self.cap1 := new System.Windows.Forms.PictureBox();
        self.cap2 := new System.Windows.Forms.PictureBox();
        self.cap3 := new System.Windows.Forms.PictureBox();
        (System.ComponentModel.ISupportInitialize(self.cap1)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.cap2)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.cap3)).BeginInit();
        self.SuspendLayout();
        // 
        // title
        // 
        self.title.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.title.Location := new System.Drawing.Point(12, 0);
        self.title.Name := 'title';
        self.title.Size := new System.Drawing.Size(203, 15);
        self.title.TabIndex := 3;
        self.title.Text := 'Выберите напёрсток';
        self.title.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // counter
        // 
        self.counter.Location := new System.Drawing.Point(12, 15);
        self.counter.Name := 'counter';
        self.counter.Size := new System.Drawing.Size(204, 22);
        self.counter.TabIndex := 4;
        self.counter.Text := 'Начните играть!';
        self.counter.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // cap1
        // 
        self.cap1.Image := (System.Drawing.Image(resources.GetObject('cap1.Image')));
        self.cap1.Location := new System.Drawing.Point(12, 30);
        self.cap1.Name := 'cap1';
        self.cap1.Size := new System.Drawing.Size(64, 96);
        self.cap1.TabIndex := 6;
        self.cap1.TabStop := false;
        self.cap1.Click += cap1_Click;
        // 
        // cap2
        // 
        self.cap2.Image := (System.Drawing.Image(resources.GetObject('cap2.Image')));
        self.cap2.Location := new System.Drawing.Point(82, 30);
        self.cap2.Name := 'cap2';
        self.cap2.Size := new System.Drawing.Size(64, 96);
        self.cap2.TabIndex := 7;
        self.cap2.TabStop := false;
        self.cap2.Click += cap2_Click;
        // 
        // cap3
        // 
        self.cap3.Image := (System.Drawing.Image(resources.GetObject('cap3.Image')));
        self.cap3.Location := new System.Drawing.Point(152, 30);
        self.cap3.Name := 'cap3';
        self.cap3.Size := new System.Drawing.Size(64, 96);
        self.cap3.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.cap3.TabIndex := 8;
        self.cap3.TabStop := false;
        self.cap3.Click += cap3_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(227, 118);
        self.Controls.Add(self.cap3);
        self.Controls.Add(self.cap2);
        self.Controls.Add(self.cap1);
        self.Controls.Add(self.counter);
        self.Controls.Add(self.title);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Name := 'Form1';
        self.Text := 'Напёрстки';
        self.Load += Form1_Load;
        (System.ComponentModel.ISupportInitialize(self.cap1)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.cap2)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.cap3)).EndInit();
        self.ResumeLayout(false);
    end;
