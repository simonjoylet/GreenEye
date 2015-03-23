#include <QtWidgets/QApplication>
#include "Setting.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Setting w;
	w.show();

	return a.exec();
}
