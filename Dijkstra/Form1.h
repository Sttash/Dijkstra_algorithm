#pragma once

namespace WindowsFormsApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Label^  lineLabel1;
	private: System::Windows::Forms::Label^  lineLabel2;

	private: System::ComponentModel::IContainer^  components;


		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
	private:


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lineLabel1 = (gcnew System::Windows::Forms::Label());
			this->lineLabel2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(313, 8);
			this->textBox1->MaxLength = 1;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(16, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Click += gcnew System::EventHandler(this, &Form1::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->Enter += gcnew System::EventHandler(this, &Form1::textBox1_Enter);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBox1_KeyDown);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(116, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ввести расстояния между городами";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(122, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите количество городов:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(122, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Введите номер стартового города:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(313, 42);
			this->textBox2->MaxLength = 1;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(16, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Click += gcnew System::EventHandler(this, &Form1::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			this->textBox2->Enter += gcnew System::EventHandler(this, &Form1::textBox2_Enter);
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBox2_KeyDown);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(337, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 29);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Введите число от 2 до 9";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(335, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 14);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Введите число от 1 до 9";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(336, 35);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 45);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Введите число, не превышающее число городов";
			this->label7->Visible = false;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(9, 266);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 14);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Ответ:";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 291);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->AutoScroll = true;
			this->panel2->AutoSize = true;
			this->panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Enabled = false;
			this->panel2->Location = System::Drawing::Point(12, 155);
			this->panel2->MaximumSize = System::Drawing::Size(445, 200);
			this->panel2->MinimumSize = System::Drawing::Size(445, 40);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(445, 40);
			this->panel2->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(12, 198);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(289, 14);
			this->label9->TabIndex = 0;
			this->label9->Text = L"*Все расстояния обязательно должны быть введены";
			this->label9->Visible = false;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(12, 216);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Рассчитать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(106, 216);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Отмена";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 139);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(287, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Введите расстояния, которые будут между городами:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Location = System::Drawing::Point(3, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(471, 106);
			this->panel1->TabIndex = 18;
			// 
			// lineLabel1
			// 
			this->lineLabel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lineLabel1->Location = System::Drawing::Point(8, 129);
			this->lineLabel1->Name = L"lineLabel1";
			this->lineLabel1->Size = System::Drawing::Size(455, 1);
			this->lineLabel1->TabIndex = 19;
			this->lineLabel1->Visible = false;
			// 
			// lineLabel2
			// 
			this->lineLabel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lineLabel2->Location = System::Drawing::Point(8, 251);
			this->lineLabel2->Name = L"lineLabel2";
			this->lineLabel2->Size = System::Drawing::Size(455, 1);
			this->lineLabel2->TabIndex = 20;
			this->lineLabel2->Visible = false;
			// 
			// Form1
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(474, 332);
			this->Controls->Add(this->lineLabel2);
			this->Controls->Add(this->lineLabel1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(490, 155);
			this->Name = L"Form1";
			this->Text = L"Решение задачи коммивояжёра с помощью метода Дейкстры";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


#define nl Environment::NewLine // Перевод строки
#define tp Color::Transparent // "Прозрачный" цвет

public:
	array <Label^> ^lb;	  // Объявление массива меток Label
	array <TextBox^> ^tb; // Объявление массива текстовых полей TextBox
	System::Windows::Forms::ContextMenu ^cm; // Объявление пустого контекстного меню
	bool nonNumberEntered,	// Если в TextBox вводится не цифра, тогда nonNumberEntered = 1
						// и ввод этого символа в TextBox не производится
		 tb_e; //Если хотя бы одно из полей ввода на панели №1 пустое, tb_e = 1;
	int **D, //Расстояние между городами (веса рёбер графа); Размер = n*n
		*A,	 //Свободные (0) и просмотренные (номер вершины) вершины; Размер = n
		*B,  //Формируемый маршрут; Размер = n; Вес ребра (растояние между соседними городами);
		n,	 //Количество городов
		s,	 //Номер стартовой вершины (города)
		n2, i, i1, j, p, p2, //Счётчики
		min, // Минимальное расстояние
		n_min, // Номер города с минимальным расстоянием от текущего города
		c, // Текущий город
		r,	// Возвращает результат проверки присутствия найденного номера города в массиве *A.
			// Если город с таким номером уже есть в массиве *A, тогда r = 1.
		sum_B, // Сумма элементов массива *B – общая протяжённость найденного маршрута
		F1h; // Высота формы Form1

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 Form1::Height = 155; // Приведение высоты формы к такому виду, чтобы на ней уместилась только панель №1
			 this->BackgroundImage = Image::FromFile( "wp1.jpg" );
			 this->BackgroundImageLayout = ImageLayout::Stretch;
			 panel2->BackgroundImage = Image::FromFile( "wp1.jpg" );

			 cm = gcnew System::Windows::Forms::ContextMenu();
			 textBox1->ContextMenu = cm;
			 textBox2->ContextMenu = cm;
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*=====================================================*/
			 /* Ввод количества городов и начального города	(шаг 1)	*/
			 /* Проверка на пустое значение или значение 0 или 1	*/
			 /* в текстовых полях textBox1 и textBox2				*/
			 /*=====================================================*/
			 if (textBox1->Text == "" || (Convert::ToInt32(textBox1->Text) <= 1) ||
				 textBox2->Text == "" || textBox2->Text == "0" ||
				 (Convert::ToInt32(textBox2->Text) > Convert::ToInt32(textBox1->Text)))
			 {
				 if ((textBox1->Text == "" || (Convert::ToInt32(textBox1->Text) <= 1)) &&
					 (textBox2->Text == "" || textBox2->Text == "0"))
				 {
					 label7->Visible = false;
					 textBox1->BackColor = Color::Pink;
					 label5->Visible = true;
					 textBox2->BackColor = Color::Pink;
					 label6->Visible = true;
					 textBox1->Select();
					 selectText(textBox1);
				 }

				 if (textBox1->Text == "" || (Convert::ToInt32(textBox1->Text) <= 1))
				 {
					textBox1->BackColor = Color::Pink;
					label5->Visible = true;
					textBox1->Select();
					selectText(textBox1);
				 }

				 else if (textBox2->Text == "" || textBox2->Text == "0")
				 {
				 	textBox2->BackColor = Color::Pink;
					label6->Text = Text->Concat("Введите число от 1 до " + textBox1->Text);
					label6->Visible = true;
					textBox1->Select();
					label7->Visible = false;
					textBox2->Select();
					selectText(textBox2);
				 }

				 else if (Convert::ToInt32(textBox2->Text) > Convert::ToInt32(textBox1->Text))
				 {
					 label5->Visible = false;
					 label6->Visible = false;
					 textBox2->BackColor = Color::Pink;
					 label7->Visible = true;
					 textBox2->Select();
					 selectText(textBox2);
				 }
			 }
			 /*===================================================*/
			 /* Если поля не пусты или их содержимое – не 0 или 1 */
			 /*===================================================*/
			 else
			 {
				 textBox1->BackColor = Color::Empty;
				 label5->Visible = false;
				 textBox2->BackColor = Color::Empty;
				 label6->Visible = false;
				 label7->Visible = false;

				 n = Convert::ToInt32(textBox1->Text); // Число городов (n)
				 A = new int [n]; // Создание массива A
				 B = new int [n]; // Создание массива B
				 s = Convert::ToInt32(textBox2->Text);
				 A[0] = s; // Присваивание первой ячейке массива A номера стартовой вершины
				 for (i=1; i<n; i++) // Заполнение остальных элементов
					 A[i] = 0;		 // массива A нулями
				 for (i=0; i<n; i++) // Заполнение массива B нулями
					 B[i] = 0;

				 // Если было введено количество городов и начальный город,
				 // будет предложено ввести расстояния между городами.
				 // *разблокирование панели с полями для ввода расстояний между городами,
				 // *генерация полей для ввода расстояний (шаг 2.1)

				 p = 0;
				 p2 = 0;
				 n2 = n-1;
				 D = new int *[n2]; // Инициализация массива D

				 lb = gcnew array<Label^>(n*n);	  // Инициализация массива объектов Label размером n*n
				 tb = gcnew array<TextBox^>(n*n); // Инициализация массива объектов Textbox размером n*n
				 
				 for (i=0; i<=n2; i++) // Выделение памяти под каждый элемент массива **D
					 D[i] = new int [n2];

				 for (i=1; i<=n; i++) // Цикл генерации объектов label и textBox в форме Distances на объекте panel1
				 {
					 for (j=1; j<=n; j++)
					 {
						lb[p] = gcnew Label();		// Каждый элемент массива *lb – это Label
						tb[p] = gcnew TextBox();	// Каждый элемент массива *tb – это TextBox
						cm = gcnew System::Windows::Forms::ContextMenu();
						if( (i == j) || (i > j) ) // Предотвращение создания повторяющихся Label и TextBox
						{
							// На такой TextBox невозвожно будет сфокусироваться, т.к. он будет отсутствовать на форме
							p2--;
							tb[p]->TabStop = false; // На него невозможно будет переключиться нажатием на Tab
							tb[p]->Text = "-1"; // Такой TextBox будет содержать текст "-1", который будет невозможно ввести в любой другой TextBox с клавиатуры
						}
						else
						{
							// Задание свойств объектов Label
							lb[p]->Text = ("от " + i + " до " + j + ":"); // Текст, содержащийся в объекте Label. Например, "от 1 до 2:".
							lb[p]->AutoSize = true; // Размер объекта Label будет задаваться автоматически в соответствие длине содержащегося в нём текста
							lb[p]->Location = Point(170, 15+p2*30); // Задание положения объекта Label с отступом 10px слева и 15px вниз от другого Label, находящегося сверху
							panel2->Controls->Add(lb[p]); // Добавление объекта Label на форму

							// Задание свойств объектов TextBox
							tb[p]->Size = System::Drawing::Size(30, 20); // Размер TextBox – 30x20px
							tb[p]->MaxLength = 3; // Максимальная длина текста, содержащегося в TextBox - 3 символа
							tb[p]->TabIndex = button1->TabIndex + 1 + p2; // Задание TabIndex для того, чтобы можно было перемещаться от одного TextBox к другому по нажатию на Tab
							tb[p]->ContextMenu = cm;
							tb[p]->Location = Point(230, 12+p2*30); // Задание положения TextBox на объекте panel1 с отступом 70px слева и 15px вниз от другого TextBox, находящегося сверху
							panel2->Controls->Add(tb[p]); // Добавление TextBox на форму
							tb[p]->KeyDown += gcnew KeyEventHandler(this, &Form1::textBox_KeyDown); // Инициализация события KeyDown для TextBox
							tb[p]->KeyPress += gcnew KeyPressEventHandler(this, &Form1::textBox_KeyPress); // Инициализация события KeyPress для TextBox
							tb[p]->TextChanged += gcnew System::EventHandler(this, &Form1::textBox_TextChanged); //Инициализация события TextChanged для TextBox
						}
						p2++;
						p++;
					 }
				 }
				 button2->TabIndex = p2; // TabIndex кнопок будет на 1
				 button3->TabIndex = p2+1; // и, соответственно, на 2 больше значения TabIndex последнего выведенного TextBox на панель №2

				 panel1->Enabled = false; //Отключение панели №1
				 panel2->Enabled = true; //Включение панели №2
				 button2->Visible = true; //Включение видимости кнопки "Рассчитать"
				 button2->Enabled = true; //Включение кнопки "Рассчитать"
				 button3->Visible = true; //Включение видимости кнопки "Отмена"
				 button3->Enabled = true; //Включение кнопки "Отмена"
				 label9->Visible = true; //Включение видимости метки, содержащей предупреждение
				 lineLabel1->Visible = true; //Влючение видимости линии lineLabel1, отделяющей панель №1 от панели №2

				 //Расстановка элементов управления на нужные позиции
				 label9->Location = Point(label9->Location.X, panel2->Location.Y + panel2->Height + 3);
				 button2->Location = Point(button2->Location.X, label9->Location.Y + 18);
				 button3->Location = Point(button3->Location.X, button2->Location.Y);
				 lineLabel2->Location = Point(lineLabel2->Location.X, button2->Location.Y + 35);

				 //Разные способы размещения изображения на панели
				 //в зависимости от количества городов (textBox'ов на 2-й панели)
				 if (n==3 || n==4)
					 panel2->BackgroundImageLayout = ImageLayout::Tile;
				 else
					 panel2->BackgroundImageLayout = ImageLayout::Stretch;

				 //Изменение высоты формы и фокусировка на нужный textBox
				 Form1::Height = button2->Location.Y + 70;
				 F1h = Form1::Height;
				 tb[1]->Focus(); // Фокусировка на первом поле ввода расстояний
				 Form1::AcceptButton = button2; // При нажатии на Enter будет нажиматься кнопка button2
			 }
			}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			/*==========================================*/
			/* Ввод расстояний между городами (шаг 2.2) */
			/*==========================================*/

			p = 0;
			tb_e = 0; // Сброс переменной, указывающей на присутствие пустых TextBox'ов на панели №2
			for (i=0; i<=n2; i++) // Проверка полей ввода расстояний на пустое значение или "0"
			{
				for (j=0; j<=n2; j++)
				{
					if ((tb[p]->Text == "") || (tb[p]->Text == "0") || (tb[p]->Text == "00") || (tb[p]->Text == "000"))
					//Если поле ввода пустое или введён "0"
					{
						tb[p]->BackColor = Color::Pink; // Выделение пустого TextBox цветом
						tb_e = 1; // Присвоение переменной tb_e значения "1", что в дальнейшем не позволит перейти на шаг 3
					}
					p++;
				}
			}

			if (tb_e == 1) // Если хотя бы одно поле для ввода расстояний пустое или равно "0"
			{
				//Появляется предупреждение об этом
				label9->BackColor = Color::Pink;
				Form1::Height = F1h;
				label3->Visible = false;
				label4->Visible = false;
			}
			else // Если введены все расстояния
			{
				label9->BackColor = tp; // Сброс цвета метки с предупреждением

				p = 0;
				for (i=0; i<n; i++)	// Заполнение массива D расстояниями, введёнными в текстовые поля в форме Distances
				{
					for (j=0; j<n; j++)
					{
						if (i < j)
							D[i][j] = Convert::ToInt32(tb[p]->Text); // Запись числа, введённого в TextBox, в соответствующий элемент массива **D
						if (i == j)
							D[i][j] = 0; // Главная диагональ массива **D будет состоять из нулей
						if (i > j)
							D[i][j] = D[j][i]; // Создание матрицы, симметричной относительно главной диагонали
						p++;
					}
				}

				A[0] = s; // Присваивание первой ячейке массива A номера стартовой вершины
				for (i=1; i<n; i++) // Заполнение остальных элементов
					A[i] = 0;		 // массива A нулями
				for (i=0; i<n; i++) // Заполнение массива B нулями
					B[i] = 0;

			
				/*===========================*/
				/* Перебор строк массива D	 */
				/* Поиск кратчайшего пути	 */
				/* Основной алгоритм (шаг 3) */	
				/*===========================*/

				c = s-1; // Переменная c будет равна s-1, т.к. нумерация элементов массивов начинается с нуля
				for (j=1; j<n; j++)
				{
					min = 1000; // Переменная min равна 1000, т.к. это число на 1 больше самого большого числа,
								// которое можно ввести в текстовое поле на форме Distances как расстояние между городами
					for (i=0; i<n; i++)
					{
						r = 0;	// Исходное значение переменной r. Она становится равна 1, только если номер найденного города,
								// до которого расстояние от текущего города является минимальным, уже присутствует в массиве *A
						for (i1=0; i1<n; i1++)
						{
							if ((i == A[i1]-1) && (A[i1] != 0)) // Вышеописанная проверка
							// Условие: Если номер найденного города с потенциально минимальным расстоянием от текущего
							// уже есть в массиве *A, то r=1 и впоследствии номер этого города не записывается в массив *A
								r = 1;
						}
						if ((D[c][i] < min) && (D[c][i] != 0) && (r != 1))
						// Поиск города с минимальным растоянием от текущего города.
						// Расстояние до этого города должно быть минимальным из всех городов,
						// за исключением уже посещённых городов и городов, расстояние до которых = 0
						{
							min = D[c][i]; // Номер строки (c) – текущий город (в первой итерации это стартовый город), номер столбца (i) – число от 0 до n-1
							n_min = i; // Номер города с минимальным расстоянием от текущего будет равен номеру итерации (i) этого цикла
						}
					}
					A[j] = n_min+1; // Номер найденного города будет записан в массив *A большим на 1, т.к. в массиве **D нумерация столбцов начинается с 0
					B[j-1] = min; // Запись расстояния от текущего города до найденного в ячейку массива *B
					c = n_min; // Найденный город становится текущим
				}
				B[n2] = D[c][s-1]; // В последний элемент массива *B записывается расстояние от последнего города в цепи до стартового города

				sum_B = 0; // Обнуление суммы элементов массива *B (протяжённость оптимального пути)
				for (i=0; i<n; i++)
					sum_B += B[i]; // Рассчёт протяжённости оптимального маршрута (суммирование всех элементов массива *B)

				/*=====================================================*/

				// Вывод ответа
				label4->Text = "Длина маршрута: " + Convert::ToString(sum_B) + "\n" + "Порядок объезда городов: ";
				for (i=0; i<n; i++)
					label4->Text += A[i] + " -> ";
				label4->Text += Convert::ToString(s);

				// Включение видимости Label'ов, содержащих ответ
				// Приведение размера формы к такому, чтобы на ней вместился ответ
				lineLabel2->Visible = true;
				label3->Visible = true;
				label4->Visible = true;

				Form1::Height = F1h + 80;

				button2->Enabled = false;
				button3->Text = "OK";
			}
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Нажатие кнопки "Отмена" в поле ввода расстояний
			 // Подстройка внешнего вида формы
			 Form1::Height = 155;
			 button3->Text = "Отмена";
			 panel2->Enabled = false; //Отключение панели для ввода расстояний
			 panel1->Enabled = true; // Включение панели для ввода количества городов и начального города
			 button2->Visible = false; //Отключение видимости кнопки "Рассчитать"
			 button2->Enabled = false; //Отключение кнопки "Рассчитать"
			 button3->Visible = false; //Отключение видимости кнопки "Отмена"
			 button3->Enabled = false; //Отключение кнопки "Отмена"
			 label9->Visible = false; //Скрытие метки с предупреждением
			 label9->BackColor = tp;
			 lineLabel2->Visible = false; //Отключение видимости линии lineLabel2, отделяющей поле ввода расстояний от поля с ответом
			 panel2->Controls->Clear(); //Очистка пенали №2 от полей ввода расстояний
			 label3->Visible = false;
			 label4->Visible = false;
			 Form1::AcceptButton = button1; // При нажатии на Enter будет нажиматься кнопка button1
		 }

private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 // Присваивание флагу значения false
			 nonNumberEntered = false;

			 // Определяет, что нажата клавиша не из верхнего цифрового ряда
			 if ( e->KeyCode < Keys::D0 || e->KeyCode > Keys::D9 )
			 {
				 // Определяет, что нажата клавиша не из Num-блока
				 if ( e->KeyCode < Keys::NumPad0 || e->KeyCode > Keys::NumPad9 )
				 {
					 // Определяет, что нажатая клавиша – не Backspace
					 if ( e->KeyCode != Keys::Back )
					 {
						 // Нажата нецифровая клавиша
						 // Переключение флага в значение true и определение события KeyPress
						 nonNumberEntered = true;
					 }
				 }
			 }
			 // Если зажат Shift, то уже будет вводиться не число
			 if (Control::ModifierKeys == Keys::Shift)
				 nonNumberEntered = true;
			 // Если производится попытка вставить текст путём нажатия сочетания клавиш Shift+Insert
			 if (e->KeyCode == Keys::Insert)
				 e->Handled = true;
		 }
// Это событие происходит после события KeyDown и может быть использовано для предотвращения
// ввода управляющих символов.
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 // Проверка флага на предмет изменения его значения в событии KeyDown.
			 if ( nonNumberEntered == true )
			 {			// Остановка ввода символа в элемент до тех пор, пока он не будет цифровым.
				 e->Handled = true;

				 if (textBox1->Text == "")
				 {
					 textBox1->BackColor = Color::Pink;
					 label5->Visible = true;
				 }
			 }
			 else
			 {
				 textBox1->BackColor = Color::Empty;
				 label5->Visible = false;
			 }
		 }

// То же самое, только для textBox2
private: System::Void textBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 nonNumberEntered = false;

			 if ( e->KeyCode < Keys::D0 || e->KeyCode > Keys::D9 )
			 {
				 if ( e->KeyCode < Keys::NumPad0 || e->KeyCode > Keys::NumPad9 )
				 {
					 if ( e->KeyCode != Keys::Back )
					 {
						 nonNumberEntered = true;
					 }
				 }
			 }
			 if (Control::ModifierKeys == Keys::Shift)
				 nonNumberEntered = true;
			 if (e->KeyCode == Keys::Insert)
				 e->Handled = true;
		 }
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ( nonNumberEntered == true )
			 {
				 e->Handled = true;

				 if (textBox2->Text == "")
				 {
					 textBox2->BackColor = Color::Pink;
					 label6->Visible = true;
				 }
			 }
			 else
			 {
				 textBox2->BackColor = Color::Empty;
				 label6->Visible = false;
			 }
		 }

// Функция, выполняющая выделение всего текста, содержащегося в объекте TextBox, при переключении на него
private: void selectText ( TextBox^ tBox )
		 {
			 if (!System::String::IsNullOrEmpty(tBox->Text))
			 {
				 tBox->SelectionStart = 0;
				 tBox->SelectionLength = tBox->Text->Length;
			 }
		 }

private: System::Void textBox_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				nonNumberEntered = false;

				if ( e->KeyCode < Keys::D0 || e->KeyCode > Keys::D9 )
				{
					if ( e->KeyCode < Keys::NumPad0 || e->KeyCode > Keys::NumPad9 )
					{
						if ( e->KeyCode != Keys::Back )
						{
							nonNumberEntered = true;
						}
					}
				}
				if (Control::ModifierKeys == Keys::Shift)
					nonNumberEntered = true;
				if (e->KeyCode == Keys::Insert)
					e->Handled = true;
		 }
private: System::Void textBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				if ( nonNumberEntered == true )
				{
					e->Handled = true;
				}
		 }
private: System::Void textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->ActiveControl->BackColor = Color::Empty;
			 Form1::Height = F1h;
			 button2->Enabled = true;
			 button3->Text = "Отмена";
			 label4->Text = "";
			 label4->Visible = false;
			 label3->Visible = false;
			 lineLabel2->Visible = false;
		 }

// Загрузка формы
private: System::Void textBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			selectText(textBox1);
		 }
private: System::Void textBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
			selectText(textBox2);
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			if (label6->Visible == true)
				label6->Visible = false;
			if (String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrEmpty(textBox2->Text))
				// Кнопка "Ввести расстояния между городами" отключается, если хотя бы одно из двух полей ввода пустое
				button1->Enabled = false;
			else // Иначе она включается
				button1->Enabled = true;
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			if (String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrEmpty(textBox2->Text))
				// То же, что и выше, только при изменении текста в textBox2
				button1->Enabled = false;
			else
				button1->Enabled = true;
		 }
private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			selectText(textBox1);
		 }
private: System::Void textBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			selectText(textBox2);
		 }
	};
}