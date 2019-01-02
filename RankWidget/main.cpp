#include "RankWidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	RankWidget w;
	w.show();
	return a.exec();
}
