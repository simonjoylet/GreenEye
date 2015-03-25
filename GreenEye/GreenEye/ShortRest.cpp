#include "ShortRest.h"

ShortRest::ShortRest(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	hide();
}

ShortRest::~ShortRest()
{

}

void ShortRest::closeEvent(QCloseEvent * e)
{
	hide();
	e->ignore();
}
