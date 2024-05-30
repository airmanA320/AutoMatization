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
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	protected:




	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ действияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ DownloadMenuButton;

	private: System::Windows::Forms::ToolStripMenuItem^ AddMenuButton;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обдновитьToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ order_number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ order_date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employee_code;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->действияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DownloadMenuButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обдновитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AddMenuButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->order_number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->order_date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employee_code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->order_number,
					this->order_date, this->employee_code
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(882, 399);
			this->dataGridView1->TabIndex = 1;
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
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// действияToolStripMenuItem
			// 
			this->действияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->DownloadMenuButton,
					this->обдновитьToolStripMenuItem, this->AddMenuButton, this->удалитьToolStripMenuItem
			});
			this->действияToolStripMenuItem->Name = L"действияToolStripMenuItem";
			this->действияToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->действияToolStripMenuItem->Text = L"Действия";
			this->действияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::действияToolStripMenuItem_Click);
			// 
			// DownloadMenuButton
			// 
			this->DownloadMenuButton->Name = L"DownloadMenuButton";
			this->DownloadMenuButton->Size = System::Drawing::Size(180, 22);
			this->DownloadMenuButton->Text = L"Загрузить";
			this->DownloadMenuButton->Click += gcnew System::EventHandler(this, &MyForm2::DownloadMenuButton_Click);
			// 
			// обдновитьToolStripMenuItem
			// 
			this->обдновитьToolStripMenuItem->Name = L"обдновитьToolStripMenuItem";
			this->обдновитьToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->обдновитьToolStripMenuItem->Text = L"Обновить";
			this->обдновитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::обдновитьToolStripMenuItem_Click);
			// 
			// AddMenuButton
			// 
			this->AddMenuButton->Name = L"AddMenuButton";
			this->AddMenuButton->Size = System::Drawing::Size(180, 22);
			this->AddMenuButton->Text = L"Добавить";
			this->AddMenuButton->Click += gcnew System::EventHandler(this, &MyForm2::AddMenuButton_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::удалитьToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(93, 20);
			this->выходToolStripMenuItem->Text = L"Информация";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::выходToolStripMenuItem_Click);
			// 
			// order_number
			// 
			this->order_number->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->order_number->HeaderText = L"Код_авто";
			this->order_number->Name = L"order_number";
			// 
			// order_date
			// 
			this->order_date->HeaderText = L"Тип_топлива";
			this->order_date->Name = L"order_date";
			// 
			// employee_code
			// 
			this->employee_code->HeaderText = L"Норма_расхода";
			this->employee_code->Name = L"employee_code";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(906, 452);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm2";
			this->Text = L"ГСМ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DownloadMenuButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//строка подключения
		String^ connectionSring = "provider = Microsoft.ACE.OLEDB.12.0;Data Source = database.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionSring);

		//
		dbConnection->Open();
		String^ query = "SELECT * FROM [ГСМ]";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		OleDbDataReader^ dbReader = dbCommand->ExecuteReader();


		if (dbReader->HasRows == false) {
			MessageBox::Show("Ошибка считывания данных");
		}
		else {
			while (dbReader->Read()) {
				dataGridView1->Rows->Add(dbReader["Код_авто"], dbReader["Тип_топлива"], dbReader["Норма_расхода"]);
			}
		}
		dbReader->Close();
		dbConnection->Close();

		return System::Void();
	}
private: System::Void AddMenuButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите строку для добавления");
		return;
	}

	int index = dataGridView1->SelectedRows[0]->Index;

	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr)
	{
		MessageBox::Show("Не все данные введены");
		return;
	}


	String^ first_string = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ second_string = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ third_string = dataGridView1->Rows[index]->Cells[2]->Value->ToString();


	String^ connectionSring = "provider = Microsoft.ACE.OLEDB.12.0;Data Source = database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionSring);


	dbConnection->Open();
	String^ query = "INSERT INTO [ГСМ] VALUES (" + first_string + ", " + second_string + ", " + third_string + ")";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);


	if (dbCommand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения");
	else
		MessageBox::Show("Данные добавлены");

	dbConnection->Close();




	return System::Void();
}
private: System::Void обдновитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

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
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr)
	{
		MessageBox::Show("Не все данные введены");
		return;
	}

	//считываем данные
	String^ first_string = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ second_string = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ third_string = dataGridView1->Rows[index]->Cells[2]->Value->ToString();

	//строка подключения
	String^ connectionString = "provider = Microsoft.ACE.OLEDB.12.0;Data Source = database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


	dbConnection->Open();//открываем соединение
	//обновляем данные выбранной строки в БД
	String^ query = "UPDATE [ГСМ] SET Тип_топлива = '" + second_string + "', Норма_расхода = '" + third_string + "' WHERE Код_авто = " + first_string;
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
private: System::Void действияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
	String^ query = "DELETE FROM [ГСМ] WHERE Код_авто = " + first_string;	//запрос
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
