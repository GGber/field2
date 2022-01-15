#include "field2.h"
#include "QDebug.h"

field2::field2(QWidget *parent)
    : QMainWindow(parent)
{
	#if _MSC_VER >= 1600                        //ÖĞÎÄÂÒÂë
	#pragma execution_character_set("utf-8")
	#endif

    ui.setupUi(this);
	qDebug() << "Éµ±ÆÍäÍä" << endl;
}
