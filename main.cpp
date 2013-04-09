#include "seeas.h"
#include <QtGui/QApplication>

bool createConnection();

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//���ı���
	QTextCodec::setCodecForTr(QTextCodec::codecForName("GB2312"));
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"));
    //�������
	QPixmap pixmap(":/Resources/splash1.jpg");
	QSplashScreen splash(pixmap);
	splash.show();
	
	Qt::Alignment bottomRight = Qt::AlignRight | Qt::AlignBottom;		//���ÿ�ʼ������ʾ���ֵĶ���
	splash.showMessage(QObject::tr("����������..."), bottomRight, Qt::black);

	SEEAS w;
	//���뻭����ͣ
	/*for (int i=0; i<5000; i++){
		splash.repaint();
	}*/
	
	splash.showMessage(QObject::tr("����ģ��..."), bottomRight, Qt::black);
	//���뻭����ͣ
	/*for (int i=0; i<5000; i++){
	splash.repaint();
	}*/
	splash.showMessage(QObject::tr("�������ݿ�..."), bottomRight, Qt::black);

	if (!createConnection())
		return 1;

	w.show();

	splash.finish(&w);
	return a.exec();
}

bool createConnection()
//�������ݿ�
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("SEEAS");
	if (!db.open()){
		QMessageBox::critical(0, QObject::tr("���ݿ����"), db.lastError().text());	//������ʾ
		return false;
	}
	return true;
}