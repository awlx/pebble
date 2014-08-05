/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a dbusadaptor org.pebbled.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef DBUSADAPTOR_H_1404986135
#define DBUSADAPTOR_H_1404986135

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.pebbled
 */
class PebbledAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.pebbled")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.pebbled\">\n"
"    <property access=\"read\" type=\"a{sv}\" name=\"pebble\">\n"
"      <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"s\" name=\"name\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"address\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"connected\"/>\n"
"    <signal name=\"pebbleChanged\"/>\n"
"    <signal name=\"connectedChanged\"/>\n"
"    <method name=\"ping\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"val\"/>\n"
"    </method>\n"
"    <method name=\"time\"/>\n"
"    <method name=\"disconnect\"/>\n"
"    <method name=\"reconnect\"/>\n"
"  </interface>\n"
        "")
public:
    PebbledAdaptor(QObject *parent);
    virtual ~PebbledAdaptor();

public: // PROPERTIES
    Q_PROPERTY(QString address READ address)
    QString address() const;

    Q_PROPERTY(bool connected READ connected)
    bool connected() const;

    Q_PROPERTY(QString name READ name)
    QString name() const;

    Q_PROPERTY(QVariantMap pebble READ pebble)
    QVariantMap pebble() const;

public Q_SLOTS: // METHODS
    void disconnect();
    void ping(int val);
    void time();
    void reconnect();
Q_SIGNALS: // SIGNALS
    void connectedChanged();
    void pebbleChanged();
};

#endif
