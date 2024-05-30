#pragma once

namespace AutoMatization {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	 
	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ действияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ DownloadMenuButton;
	private: System::Windows::Forms::ToolStripMenuItem^ UpdateMenuButton;



	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AddMenuButton;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ order_number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ order_date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employee_code;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_code;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;


























	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->order_number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->order_date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employee_code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->действияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DownloadMenuButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->UpdateMenuButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AddMenuButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->order_number,
					this->order_date, this->employee_code, this->client_code
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(882, 399);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::dataGridView1_CellContentClick_1);
			// 
			// order_number
			// 
			this->order_number->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->order_number->HeaderText = L"Код_авто";
			this->order_number->Name = L"order_number";
			// 
			// order_date
			// 
			this->order_date->HeaderText = L"Модель_авто";
			this->order_date->Name = L"order_date";
			// 
			// employee_code
			// 
			this->employee_code->HeaderText = L"Год_выпуска";
			this->employee_code->Name = L"employee_code";
			// 
			// client_code
			// 
			this->client_code->HeaderText = L"Гос_номер";
			this->client_code->Name = L"client_code";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->действияToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(906, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// действияToolStripMenuItem
			// 
			this->действияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->DownloadMenuButton,
					this->UpdateMenuButton, this->AddMenuButton, this->удалитьToolStripMenuItem
			});
			this->действияToolStripMenuItem->Name = L"действияToolStripMenuItem";
			this->действияToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->действияToolStripMenuItem->Text = L"Действия";
			this->действияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::действияToolStripMenuItem_Click);
			// 
			// DownloadMenuButton
			// 
			this->DownloadMenuButton->Name = L"DownloadMenuButton";
			this->DownloadMenuButton->Size = System::Drawing::Size(180, 22);
			this->DownloadMenuButton->Text = L"Загрузить";
			this->DownloadMenuButton->Click += gcnew System::EventHandler(this, &MyForm1::DownloadMenuButton_Click);
			// 
			// UpdateMenuButton
			// 
			this->UpdateMenuButton->Name = L"UpdateMenuButton";
			this->UpdateMenuButton->Size = System::Drawing::Size(180, 22);
			this->UpdateMenuButton->Text = L"Обновить";
			this->UpdateMenuButton->Click += gcnew System::EventHandler(this, &MyForm1::UpdateMenuButton_Click);
			// 
			// AddMenuButton
			// 
			this->AddMenuButton->Name = L"AddMenuButton";
			this->AddMenuButton->Size = System::Drawing::Size(180, 22);
			this->AddMenuButton->Text = L"Добавить";
			this->AddMenuButton->Click += gcnew System::EventHandler(this, &MyForm1::AddMenuButton_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::удалитьToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(93, 20);
			this->выходToolStripMenuItem->Text = L"Информация";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::выходToolStripMenuItem_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(906, 452);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->Text = L"Автопарк";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{

	}


private: System::Void DownloadMenuButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//строка подключения
	String^ connectionString = "provider = Microsoft.ACE.OLEDB.12.0;Data Source = database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполняем запрос к БД
	dbConnection->Open();//открываем подключение с БД
	String^ query = "SELECT * FROM [Автопарк]";	//запрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);	//команда
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();	//считываем данные

	//проверяем данные
	if (dbReader->HasRows == false) {
		MessageBox::Show("Ошибка считывания данных");
	}
	else {
		//вносим данные в форму
		while (dbReader->Read()) {
			dataGridView1->Rows->Add(dbReader["Код_авто"], dbReader["Модель_авто"], dbReader["Год_выпуска"], dbReader["Гос_номер"]);
		}
	}

	//закрываем соединение
	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}
private: System::Void AddMenuButton_Click(System::Object^ sender, System::EventArgs^ e) {

	//проверяем выбрана ли строка
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите строку для добавления");
		return;
	}

	//узнаем индекс выбранной строки
	int index = dataGridView1->SelectedRows[0]->Index;

	//проверяем данные
	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr )
	{
		MessageBox::Show("Не все данные введены");
		return;
	}

	//считываем данные
	String^ first_string = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ second_string = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ third_string = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ fourth_string = dataGridView1->Rows[index]->Cells[3]->Value->ToString();

	//строка подключения
	String^ connectionString = "provider = Microsoft.ACE.OLEDB.12.0;Data Source = database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполняем запрос к БД
	dbConnection->Open();	//открываем соединение
	//добавляем данные в БД
	String^ query = "INSERT INTO [Автопарк] VALUES ("+ first_string +", '" + second_string + "', '" + third_string + "', '" + fourth_string + "')";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

	//выполняем запрос
	if (dbCommand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения");
	else {
		MessageBox::Show("Данные добавлены");
	}

	//закрываем соединение
	dbConnection->Close();
	



	return System::Void();
}
private: System::Void действияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void UpdateMenuButton_Click(System::Object^ sender, System::EventArgs^ e) {

	//проверяем выбрана ли строка
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите строку для обновления");
		return;
	}

	//узнаем индекс выбранной строки
	int index = dataGridView1->SelectedRows[0]->Index;

	//проверяем данные
	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr)
	{
		MessageBox::Show("Не все данные введены");
		return;
	}

	//считываем данные
	String^ first_string = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ second_string = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ third_string = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ fourth_string = dataGridView1->Rows[index]->Cells[3]->Value->ToString();

	//строка подключения
	String^ connectionString = "provider = Microsoft.ACE.OLEDB.12.0;Data Source = database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


	dbConnection->Open();//открываем соединение
	//обновляем данные выбранной строки в БД
	String^ query = "UPDATE [Автопарк] SET Модель_авто = '" + second_string + "', Год_выпуска = '" + third_string + "', Гос_номер = '" + fourth_string + "' WHERE Код_авто = " + first_string;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

	//выполняем запрос
	if (dbCommand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения");
	else {
		MessageBox::Show("Данные изменены");
	}

	//закрываем соединение
	dbConnection->Close();

	return System::Void();

}
private: System::Void удалитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//проверяем выбрана ли строка
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите строку для удаления");
		return;
	}
	//узнаем индекс выбранной строки
	int index = dataGridView1->SelectedRows[0]->Index;

	//проверяем все ли данные введены
	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr)
	{
		MessageBox::Show("Не все данные введены");
		return;
	}

	//считываем данные
	String^ first_string = dataGridView1->Rows[index]->Cells[0]->Value->ToString();

	//подключаемся к БД
	String^ connectionString = "provider = Microsoft.ACE.OLEDB.12.0;Data Source = database.mdb"; //строка подключения
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//выполняем запрос к БД
	dbConnection->Open();	//открываем соединение
	String^ query = "DELETE FROM [автопарк] WHERE Код_авто = " + first_string;	//запрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);	//команда


	//выполняем запрос
	if (dbCommand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения");
	else {
		MessageBox::Show("Данные удалены");

		dataGridView1->Rows->RemoveAt(index);//удаляем строку из формы

	}


	//закрываем соединение с БД
	dbConnection->Close();




	return System::Void();
}
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Для загрузки базы данных в программу, вам понадобится база данных Microsoft ACCESS в формате database.mdb");
}
};
}
