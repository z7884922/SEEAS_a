#include "stackeddlg.h"


stackedDlg::stackedDlg(QWidget *parent)
	: QWidget(parent)
{
	leftlist = new QListWidget;
	leftlist->insertItem(0,tr("��ӭ"));
	leftlist->insertItem(1,tr("�������"));
	leftlist->insertItem(2,tr("�ĵ�����"));
	leftlist->insertItem(3,tr("ָ�����"));
	leftlist->insertItem(4,tr("���ֹ���"));
	leftlist->insertItem(5,tr("��������"));
	leftlist->insertItem(6,tr("���׹���"));
	leftlist->insertItem(7,tr("�ɼ�����"));

	groupmng = new GroupMng;
	welcome = new Welcome;
	indicate = new IndicateMng;
	documents = new DocumMng;

	stack = new QStackedLayout;
	stack->addWidget(welcome);
	stack->addWidget(groupmng);
	stack->addWidget(documents);
	stack->addWidget(indicate);

	QHBoxLayout *mainLayout = new QHBoxLayout;
	mainLayout->setMargin(5);
	mainLayout->setSpacing(5);
	mainLayout->addWidget(leftlist);
	mainLayout->addLayout(stack);
	mainLayout->setStretchFactor(leftlist,1);
	mainLayout->setStretchFactor(stack,7);
	connect(leftlist,SIGNAL(currentRowChanged(int)),stack,SLOT(setCurrentIndex(int)));

	setLayout(mainLayout);
}

stackedDlg::~stackedDlg()
{

}
