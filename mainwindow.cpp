#include <QDebug>
#include <sstream>
#include <QFile>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mytest.pb.h"
#include "ct.pb.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

	/* protobuf */
	{
		Hello x;
		QString name = "KangYuanZhe12345";
		x.set_id(6);
		x.set_name(name.toStdString());

		QByteArray byteArray;
		byteArray.resize(x.ByteSize());
		x.SerializeToArray(byteArray.data(), x.ByteSize());

		// write to file
		QString filename = "out.txt";
		QFile file(filename);
		if (file.open(QIODevice::ReadWrite))
		{
			file.write(byteArray.data(), byteArray.size());
			file.close();
		}

		// ct request
		ctproto::ctrequest req;
		req.set_quote("hello,quote");
		req.set_start("2020.07.30");
		req.set_end("2020.08.05");
		req.set_length(3210);

		QByteArray ctOut;
		ctOut.resize(req.ByteSize());
		req.SerializeToArray(ctOut.data(), req.ByteSize());

		QString ctFileName = "ct.out";
		QFile ctFile(ctFileName);
		if (ctFile.open(QIODevice::ReadWrite))
		{
			ctFile.write(ctOut.data(), ctOut.size());
			ctFile.close();
		}
	}
}

MainWindow::~MainWindow()
{
    delete ui;
}

