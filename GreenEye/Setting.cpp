#include "Setting.h"

Setting::Setting(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Setting::~Setting()
{
}

void Setting::closeEvent(QCloseEvent * e)
{
	hide();
	e->ignore();
}
