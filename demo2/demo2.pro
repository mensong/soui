######################################################################
# Automatically generated by qmake (3.0) ?? 2? 11 19:27:03 2022
######################################################################

TEMPLATE = app
TARGET = demo2
CONFIG(x64){
TARGET = $$TARGET"64"
}
DEPENDPATH += .
INCLUDEPATH += . \
			   ../utilities/include \
			   ../soui/include \
			   ../components
			   
dir = ..
include($$dir/common.pri)

CONFIG(debug,debug|release){
	LIBS += utilities4d.lib soui4d.lib
}
else{
	LIBS += utilities4.lib soui4.lib
}

# Input
HEADERS += ComLoader.h \
           resource.h \
           TestLvAdapter.h \
           res/resource.h \
SOURCES += ComLoader.c demo2.c TestLvAdapter.c

RC_FILE += demo2.rc