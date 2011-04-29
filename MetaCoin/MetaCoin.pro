#-------------------------------------------------
#
# Project created by QtCreator 2011-04-29T22:45:50
#
#-------------------------------------------------

QT       += core gui

TARGET = MetaCoin
TEMPLATE = app


SOURCES += main.cpp\
        hammer.cpp \
    feedmanager.cpp

HEADERS  += hammer.h \
    feedmanager.h

FORMS    += hammer.ui

# QJSON (Internal)

HEADERS += ../ThirdParty/qjson-0.7.1/qjson/src/json_scanner.h \
           ../ThirdParty/qjson-0.7.1/qjson/src/parser.h \
           ../ThirdParty/qjson-0.7.1/qjson/src/parser_p.h \
           ../ThirdParty/qjson-0.7.1/qjson/src/parserrunnable.h \
           ../ThirdParty/qjson-0.7.1/qjson/src/qjson_debug.h \
           ../ThirdParty/qjson-0.7.1/qjson/src/qjson_export.h \
           ../ThirdParty/qjson-0.7.1/qjson/src/qobjecthelper.h \
           ../ThirdParty/qjson-0.7.1/qjson/src/serializer.h \
           ../ThirdParty/qjson-0.7.1/qjson/src/serializerrunnable.h
