// +build !minimal

#define protected public
#define private public

#include "macextras.h"
#include "_cgo_export.h"

#include <QAudioSystemPlugin>
#include <QByteArray>
#include <QCameraImageCapture>
#include <QChildEvent>
#include <QDBusPendingCallWatcher>
#include <QEvent>
#include <QExtensionFactory>
#include <QExtensionManager>
#include <QGraphicsObject>
#include <QGraphicsWidget>
#include <QIcon>
#include <QLayout>
#include <QMacPasteboardMime>
#include <QMacToolBar>
#include <QMacToolBarItem>
#include <QMediaPlaylist>
#include <QMediaRecorder>
#include <QMediaServiceProviderPlugin>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOffscreenSurface>
#include <QPaintDeviceWindow>
#include <QPdfWriter>
#include <QQuickItem>
#include <QRadioData>
#include <QRemoteObjectPendingCallWatcher>
#include <QScriptExtensionPlugin>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <QWindow>

class MyQMacPasteboardMime: public QMacPasteboardMime
{
public:
	bool canConvert(const QString & mime, QString flav) { QByteArray* tc6d51a = new QByteArray(mime.toUtf8()); QtMacExtras_PackedString mimePacked = { const_cast<char*>(tc6d51a->prepend("WHITESPACE").constData()+10), tc6d51a->size()-10, tc6d51a };QByteArray* t81c607 = new QByteArray(flav.toUtf8()); QtMacExtras_PackedString flavPacked = { const_cast<char*>(t81c607->prepend("WHITESPACE").constData()+10), t81c607->size()-10, t81c607 };return callbackQMacPasteboardMime_CanConvert(this, mimePacked, flavPacked) != 0; };
	QList<QByteArray> convertFromMime(const QString & mime, QVariant data, QString flav) { QByteArray* tc6d51a = new QByteArray(mime.toUtf8()); QtMacExtras_PackedString mimePacked = { const_cast<char*>(tc6d51a->prepend("WHITESPACE").constData()+10), tc6d51a->size()-10, tc6d51a };QByteArray* t81c607 = new QByteArray(flav.toUtf8()); QtMacExtras_PackedString flavPacked = { const_cast<char*>(t81c607->prepend("WHITESPACE").constData()+10), t81c607->size()-10, t81c607 };return ({ QList<QByteArray>* tmpP = static_cast<QList<QByteArray>*>(callbackQMacPasteboardMime_ConvertFromMime(this, mimePacked, new QVariant(data), flavPacked)); QList<QByteArray> tmpV = *tmpP; tmpP->~QList(); free(tmpP); tmpV; }); };
	QVariant convertToMime(const QString & mime, QList<QByteArray> data, QString flav) { QByteArray* tc6d51a = new QByteArray(mime.toUtf8()); QtMacExtras_PackedString mimePacked = { const_cast<char*>(tc6d51a->prepend("WHITESPACE").constData()+10), tc6d51a->size()-10, tc6d51a };QByteArray* t81c607 = new QByteArray(flav.toUtf8()); QtMacExtras_PackedString flavPacked = { const_cast<char*>(t81c607->prepend("WHITESPACE").constData()+10), t81c607->size()-10, t81c607 };return *static_cast<QVariant*>(callbackQMacPasteboardMime_ConvertToMime(this, mimePacked, ({ QList<QByteArray>* tmpValuea17c9a = new QList<QByteArray>(data); QtMacExtras_PackedList { tmpValuea17c9a, tmpValuea17c9a->size() }; }), flavPacked)); };
	QString convertorName() { return ({ QtMacExtras_PackedString tempVal = callbackQMacPasteboardMime_ConvertorName(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	QString flavorFor(const QString & mime) { QByteArray* tc6d51a = new QByteArray(mime.toUtf8()); QtMacExtras_PackedString mimePacked = { const_cast<char*>(tc6d51a->prepend("WHITESPACE").constData()+10), tc6d51a->size()-10, tc6d51a };return ({ QtMacExtras_PackedString tempVal = callbackQMacPasteboardMime_FlavorFor(this, mimePacked); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	QString mimeFor(QString flav) { QByteArray* t81c607 = new QByteArray(flav.toUtf8()); QtMacExtras_PackedString flavPacked = { const_cast<char*>(t81c607->prepend("WHITESPACE").constData()+10), t81c607->size()-10, t81c607 };return ({ QtMacExtras_PackedString tempVal = callbackQMacPasteboardMime_MimeFor(this, flavPacked); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
};

Q_DECLARE_METATYPE(QMacPasteboardMime*)
Q_DECLARE_METATYPE(MyQMacPasteboardMime*)

int QMacPasteboardMime_QMacPasteboardMime_QRegisterMetaType(){qRegisterMetaType<QMacPasteboardMime*>(); return qRegisterMetaType<MyQMacPasteboardMime*>();}

char QMacPasteboardMime_CanConvert(void* ptr, struct QtMacExtras_PackedString mime, struct QtMacExtras_PackedString flav)
{
	return static_cast<QMacPasteboardMime*>(ptr)->canConvert(QString::fromUtf8(mime.data, mime.len), QString::fromUtf8(flav.data, flav.len));
}

struct QtMacExtras_PackedList QMacPasteboardMime_ConvertFromMime(void* ptr, struct QtMacExtras_PackedString mime, void* data, struct QtMacExtras_PackedString flav)
{
	return ({ QList<QByteArray>* tmpValuef4d295 = new QList<QByteArray>(static_cast<QMacPasteboardMime*>(ptr)->convertFromMime(QString::fromUtf8(mime.data, mime.len), *static_cast<QVariant*>(data), QString::fromUtf8(flav.data, flav.len))); QtMacExtras_PackedList { tmpValuef4d295, tmpValuef4d295->size() }; });
}

void* QMacPasteboardMime_ConvertToMime(void* ptr, struct QtMacExtras_PackedString mime, void* data, struct QtMacExtras_PackedString flav)
{
	return new QVariant(static_cast<QMacPasteboardMime*>(ptr)->convertToMime(QString::fromUtf8(mime.data, mime.len), ({ QList<QByteArray>* tmpP = static_cast<QList<QByteArray>*>(data); QList<QByteArray> tmpV = *tmpP; tmpP->~QList(); free(tmpP); tmpV; }), QString::fromUtf8(flav.data, flav.len)));
}

struct QtMacExtras_PackedString QMacPasteboardMime_ConvertorName(void* ptr)
{
	return ({ QByteArray* t4ba9d6 = new QByteArray(static_cast<QMacPasteboardMime*>(ptr)->convertorName().toUtf8()); QtMacExtras_PackedString { const_cast<char*>(t4ba9d6->prepend("WHITESPACE").constData()+10), t4ba9d6->size()-10, t4ba9d6 }; });
}

struct QtMacExtras_PackedString QMacPasteboardMime_FlavorFor(void* ptr, struct QtMacExtras_PackedString mime)
{
	return ({ QByteArray* t7733db = new QByteArray(static_cast<QMacPasteboardMime*>(ptr)->flavorFor(QString::fromUtf8(mime.data, mime.len)).toUtf8()); QtMacExtras_PackedString { const_cast<char*>(t7733db->prepend("WHITESPACE").constData()+10), t7733db->size()-10, t7733db }; });
}

struct QtMacExtras_PackedString QMacPasteboardMime_MimeFor(void* ptr, struct QtMacExtras_PackedString flav)
{
	return ({ QByteArray* t4660db = new QByteArray(static_cast<QMacPasteboardMime*>(ptr)->mimeFor(QString::fromUtf8(flav.data, flav.len)).toUtf8()); QtMacExtras_PackedString { const_cast<char*>(t4660db->prepend("WHITESPACE").constData()+10), t4660db->size()-10, t4660db }; });
}

void* QMacPasteboardMime___convertFromMime_atList(void* ptr, int i)
{
	return new QByteArray(({QByteArray tmp = static_cast<QList<QByteArray>*>(ptr)->at(i); if (i == static_cast<QList<QByteArray>*>(ptr)->size()-1) { static_cast<QList<QByteArray>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void QMacPasteboardMime___convertFromMime_setList(void* ptr, void* i)
{
	static_cast<QList<QByteArray>*>(ptr)->append(*static_cast<QByteArray*>(i));
}

void* QMacPasteboardMime___convertFromMime_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QByteArray>();
}

void* QMacPasteboardMime___convertToMime_data_atList(void* ptr, int i)
{
	return new QByteArray(({QByteArray tmp = static_cast<QList<QByteArray>*>(ptr)->at(i); if (i == static_cast<QList<QByteArray>*>(ptr)->size()-1) { static_cast<QList<QByteArray>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void QMacPasteboardMime___convertToMime_data_setList(void* ptr, void* i)
{
	static_cast<QList<QByteArray>*>(ptr)->append(*static_cast<QByteArray*>(i));
}

void* QMacPasteboardMime___convertToMime_data_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QByteArray>();
}

class MyQMacToolBar: public QMacToolBar
{
public:
	void childEvent(QChildEvent * event) { callbackQMacToolBar_ChildEvent(this, event); };
	void connectNotify(const QMetaMethod & sign) { callbackQMacToolBar_ConnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void customEvent(QEvent * event) { callbackQMacToolBar_CustomEvent(this, event); };
	void deleteLater() { callbackQMacToolBar_DeleteLater(this); };
	void Signal_Destroyed(QObject * obj) { callbackQMacToolBar_Destroyed(this, obj); };
	void disconnectNotify(const QMetaMethod & sign) { callbackQMacToolBar_DisconnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	bool event(QEvent * e) { return callbackQMacToolBar_Event(this, e) != 0; };
	bool eventFilter(QObject * watched, QEvent * event) { return callbackQMacToolBar_EventFilter(this, watched, event) != 0; };
	const QMetaObject * metaObject() const { return static_cast<QMetaObject*>(callbackQMacToolBar_MetaObject(const_cast<void*>(static_cast<const void*>(this)))); };
	void Signal_ObjectNameChanged(const QString & objectName) { QByteArray* taa2c4f = new QByteArray(objectName.toUtf8()); QtMacExtras_PackedString objectNamePacked = { const_cast<char*>(taa2c4f->prepend("WHITESPACE").constData()+10), taa2c4f->size()-10, taa2c4f };callbackQMacToolBar_ObjectNameChanged(this, objectNamePacked); };
	void timerEvent(QTimerEvent * event) { callbackQMacToolBar_TimerEvent(this, event); };
};

Q_DECLARE_METATYPE(MyQMacToolBar*)

int QMacToolBar_QMacToolBar_QRegisterMetaType(){qRegisterMetaType<QMacToolBar*>(); return qRegisterMetaType<MyQMacToolBar*>();}

void* QMacToolBar___allowedItems_atList(void* ptr, int i)
{
	return ({QMacToolBarItem * tmp = static_cast<QList<QMacToolBarItem *>*>(ptr)->at(i); if (i == static_cast<QList<QMacToolBarItem *>*>(ptr)->size()-1) { static_cast<QList<QMacToolBarItem *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QMacToolBar___allowedItems_setList(void* ptr, void* i)
{
	static_cast<QList<QMacToolBarItem *>*>(ptr)->append(static_cast<QMacToolBarItem*>(i));
}

void* QMacToolBar___allowedItems_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QMacToolBarItem *>();
}

void* QMacToolBar___items_atList(void* ptr, int i)
{
	return ({QMacToolBarItem * tmp = static_cast<QList<QMacToolBarItem *>*>(ptr)->at(i); if (i == static_cast<QList<QMacToolBarItem *>*>(ptr)->size()-1) { static_cast<QList<QMacToolBarItem *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QMacToolBar___items_setList(void* ptr, void* i)
{
	static_cast<QList<QMacToolBarItem *>*>(ptr)->append(static_cast<QMacToolBarItem*>(i));
}

void* QMacToolBar___items_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QMacToolBarItem *>();
}

void* QMacToolBar___setAllowedItems_allowedItems_atList(void* ptr, int i)
{
	return ({QMacToolBarItem * tmp = static_cast<QList<QMacToolBarItem *>*>(ptr)->at(i); if (i == static_cast<QList<QMacToolBarItem *>*>(ptr)->size()-1) { static_cast<QList<QMacToolBarItem *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QMacToolBar___setAllowedItems_allowedItems_setList(void* ptr, void* i)
{
	static_cast<QList<QMacToolBarItem *>*>(ptr)->append(static_cast<QMacToolBarItem*>(i));
}

void* QMacToolBar___setAllowedItems_allowedItems_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QMacToolBarItem *>();
}

void* QMacToolBar___setItems_items_atList(void* ptr, int i)
{
	return ({QMacToolBarItem * tmp = static_cast<QList<QMacToolBarItem *>*>(ptr)->at(i); if (i == static_cast<QList<QMacToolBarItem *>*>(ptr)->size()-1) { static_cast<QList<QMacToolBarItem *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QMacToolBar___setItems_items_setList(void* ptr, void* i)
{
	static_cast<QList<QMacToolBarItem *>*>(ptr)->append(static_cast<QMacToolBarItem*>(i));
}

void* QMacToolBar___setItems_items_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QMacToolBarItem *>();
}

void* QMacToolBar___children_atList(void* ptr, int i)
{
	return ({QObject * tmp = static_cast<QList<QObject *>*>(ptr)->at(i); if (i == static_cast<QList<QObject *>*>(ptr)->size()-1) { static_cast<QList<QObject *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QMacToolBar___children_setList(void* ptr, void* i)
{
	static_cast<QList<QObject *>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QMacToolBar___children_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject *>();
}

void* QMacToolBar___dynamicPropertyNames_atList(void* ptr, int i)
{
	return new QByteArray(({QByteArray tmp = static_cast<QList<QByteArray>*>(ptr)->at(i); if (i == static_cast<QList<QByteArray>*>(ptr)->size()-1) { static_cast<QList<QByteArray>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void QMacToolBar___dynamicPropertyNames_setList(void* ptr, void* i)
{
	static_cast<QList<QByteArray>*>(ptr)->append(*static_cast<QByteArray*>(i));
}

void* QMacToolBar___dynamicPropertyNames_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QByteArray>();
}

void* QMacToolBar___findChildren_atList(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QMacToolBar___findChildren_setList(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QMacToolBar___findChildren_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* QMacToolBar___findChildren_atList3(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QMacToolBar___findChildren_setList3(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QMacToolBar___findChildren_newList3(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void QMacToolBar_ChildEventDefault(void* ptr, void* event)
{
		static_cast<QMacToolBar*>(ptr)->QMacToolBar::childEvent(static_cast<QChildEvent*>(event));
}

void QMacToolBar_ConnectNotifyDefault(void* ptr, void* sign)
{
		static_cast<QMacToolBar*>(ptr)->QMacToolBar::connectNotify(*static_cast<QMetaMethod*>(sign));
}

void QMacToolBar_CustomEventDefault(void* ptr, void* event)
{
		static_cast<QMacToolBar*>(ptr)->QMacToolBar::customEvent(static_cast<QEvent*>(event));
}

void QMacToolBar_DeleteLaterDefault(void* ptr)
{
		static_cast<QMacToolBar*>(ptr)->QMacToolBar::deleteLater();
}

void QMacToolBar_DisconnectNotifyDefault(void* ptr, void* sign)
{
		static_cast<QMacToolBar*>(ptr)->QMacToolBar::disconnectNotify(*static_cast<QMetaMethod*>(sign));
}

char QMacToolBar_EventDefault(void* ptr, void* e)
{
		return static_cast<QMacToolBar*>(ptr)->QMacToolBar::event(static_cast<QEvent*>(e));
}

char QMacToolBar_EventFilterDefault(void* ptr, void* watched, void* event)
{
		return static_cast<QMacToolBar*>(ptr)->QMacToolBar::eventFilter(static_cast<QObject*>(watched), static_cast<QEvent*>(event));
}

void* QMacToolBar_MetaObjectDefault(void* ptr)
{
		return const_cast<QMetaObject*>(static_cast<QMacToolBar*>(ptr)->QMacToolBar::metaObject());
}

void QMacToolBar_TimerEventDefault(void* ptr, void* event)
{
		static_cast<QMacToolBar*>(ptr)->QMacToolBar::timerEvent(static_cast<QTimerEvent*>(event));
}

class MyQMacToolBarItem: public QMacToolBarItem
{
public:
	MyQMacToolBarItem(QObject *parent = Q_NULLPTR) : QMacToolBarItem(parent) {QMacToolBarItem_QMacToolBarItem_QRegisterMetaType();};
	void Signal_Activated() { callbackQMacToolBarItem_Activated(this); };
	 ~MyQMacToolBarItem() { callbackQMacToolBarItem_DestroyQMacToolBarItem(this); };
	void childEvent(QChildEvent * event) { callbackQMacToolBarItem_ChildEvent(this, event); };
	void connectNotify(const QMetaMethod & sign) { callbackQMacToolBarItem_ConnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void customEvent(QEvent * event) { callbackQMacToolBarItem_CustomEvent(this, event); };
	void deleteLater() { callbackQMacToolBarItem_DeleteLater(this); };
	void Signal_Destroyed(QObject * obj) { callbackQMacToolBarItem_Destroyed(this, obj); };
	void disconnectNotify(const QMetaMethod & sign) { callbackQMacToolBarItem_DisconnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	bool event(QEvent * e) { return callbackQMacToolBarItem_Event(this, e) != 0; };
	bool eventFilter(QObject * watched, QEvent * event) { return callbackQMacToolBarItem_EventFilter(this, watched, event) != 0; };
	const QMetaObject * metaObject() const { return static_cast<QMetaObject*>(callbackQMacToolBarItem_MetaObject(const_cast<void*>(static_cast<const void*>(this)))); };
	void Signal_ObjectNameChanged(const QString & objectName) { QByteArray* taa2c4f = new QByteArray(objectName.toUtf8()); QtMacExtras_PackedString objectNamePacked = { const_cast<char*>(taa2c4f->prepend("WHITESPACE").constData()+10), taa2c4f->size()-10, taa2c4f };callbackQMacToolBarItem_ObjectNameChanged(this, objectNamePacked); };
	void timerEvent(QTimerEvent * event) { callbackQMacToolBarItem_TimerEvent(this, event); };
};

Q_DECLARE_METATYPE(QMacToolBarItem*)
Q_DECLARE_METATYPE(MyQMacToolBarItem*)

int QMacToolBarItem_QMacToolBarItem_QRegisterMetaType(){qRegisterMetaType<QMacToolBarItem*>(); return qRegisterMetaType<MyQMacToolBarItem*>();}

void* QMacToolBarItem_NewQMacToolBarItem(void* parent)
{
	if (dynamic_cast<QAudioSystemPlugin*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QAudioSystemPlugin*>(parent));
	} else if (dynamic_cast<QCameraImageCapture*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QCameraImageCapture*>(parent));
	} else if (dynamic_cast<QDBusPendingCallWatcher*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QDBusPendingCallWatcher*>(parent));
	} else if (dynamic_cast<QExtensionFactory*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QExtensionFactory*>(parent));
	} else if (dynamic_cast<QExtensionManager*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QExtensionManager*>(parent));
	} else if (dynamic_cast<QGraphicsObject*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QGraphicsObject*>(parent));
	} else if (dynamic_cast<QGraphicsWidget*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QGraphicsWidget*>(parent));
	} else if (dynamic_cast<QLayout*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QLayout*>(parent));
	} else if (dynamic_cast<QMediaPlaylist*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QMediaPlaylist*>(parent));
	} else if (dynamic_cast<QMediaRecorder*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QMediaRecorder*>(parent));
	} else if (dynamic_cast<QMediaServiceProviderPlugin*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QMediaServiceProviderPlugin*>(parent));
	} else if (dynamic_cast<QOffscreenSurface*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QOffscreenSurface*>(parent));
	} else if (dynamic_cast<QPaintDeviceWindow*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QPaintDeviceWindow*>(parent));
	} else if (dynamic_cast<QPdfWriter*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QPdfWriter*>(parent));
	} else if (dynamic_cast<QQuickItem*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QQuickItem*>(parent));
	} else if (dynamic_cast<QRadioData*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QRadioData*>(parent));
	} else if (dynamic_cast<QRemoteObjectPendingCallWatcher*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QRemoteObjectPendingCallWatcher*>(parent));
	} else if (dynamic_cast<QScriptExtensionPlugin*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QScriptExtensionPlugin*>(parent));
	} else if (dynamic_cast<QWidget*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QWidget*>(parent));
	} else if (dynamic_cast<QWindow*>(static_cast<QObject*>(parent))) {
		return new MyQMacToolBarItem(static_cast<QWindow*>(parent));
	} else {
		return new MyQMacToolBarItem(static_cast<QObject*>(parent));
	}
}

void QMacToolBarItem_ConnectActivated(void* ptr, long long t)
{
	QObject::connect(static_cast<QMacToolBarItem*>(ptr), static_cast<void (QMacToolBarItem::*)()>(&QMacToolBarItem::activated), static_cast<MyQMacToolBarItem*>(ptr), static_cast<void (MyQMacToolBarItem::*)()>(&MyQMacToolBarItem::Signal_Activated), static_cast<Qt::ConnectionType>(t));
}

void QMacToolBarItem_DisconnectActivated(void* ptr)
{
	QObject::disconnect(static_cast<QMacToolBarItem*>(ptr), static_cast<void (QMacToolBarItem::*)()>(&QMacToolBarItem::activated), static_cast<MyQMacToolBarItem*>(ptr), static_cast<void (MyQMacToolBarItem::*)()>(&MyQMacToolBarItem::Signal_Activated));
}

void QMacToolBarItem_Activated(void* ptr)
{
	static_cast<QMacToolBarItem*>(ptr)->activated();
}

void* QMacToolBarItem_Icon(void* ptr)
{
	return new QIcon(static_cast<QMacToolBarItem*>(ptr)->icon());
}

char QMacToolBarItem_Selectable(void* ptr)
{
	return static_cast<QMacToolBarItem*>(ptr)->selectable();
}

void QMacToolBarItem_SetIcon(void* ptr, void* icon)
{
	static_cast<QMacToolBarItem*>(ptr)->setIcon(*static_cast<QIcon*>(icon));
}

void QMacToolBarItem_SetSelectable(void* ptr, char selectable)
{
	static_cast<QMacToolBarItem*>(ptr)->setSelectable(selectable != 0);
}

void QMacToolBarItem_SetStandardItem(void* ptr, long long standardItem)
{
	static_cast<QMacToolBarItem*>(ptr)->setStandardItem(static_cast<QMacToolBarItem::StandardItem>(standardItem));
}

void QMacToolBarItem_SetText(void* ptr, struct QtMacExtras_PackedString text)
{
	static_cast<QMacToolBarItem*>(ptr)->setText(QString::fromUtf8(text.data, text.len));
}

long long QMacToolBarItem_StandardItem(void* ptr)
{
	return static_cast<QMacToolBarItem*>(ptr)->standardItem();
}

struct QtMacExtras_PackedString QMacToolBarItem_Text(void* ptr)
{
	return ({ QByteArray* t8c9d50 = new QByteArray(static_cast<QMacToolBarItem*>(ptr)->text().toUtf8()); QtMacExtras_PackedString { const_cast<char*>(t8c9d50->prepend("WHITESPACE").constData()+10), t8c9d50->size()-10, t8c9d50 }; });
}

void QMacToolBarItem_DestroyQMacToolBarItem(void* ptr)
{
	static_cast<QMacToolBarItem*>(ptr)->~QMacToolBarItem();
}

void QMacToolBarItem_DestroyQMacToolBarItemDefault(void* ptr)
{
	Q_UNUSED(ptr);

}

void* QMacToolBarItem___children_atList(void* ptr, int i)
{
	return ({QObject * tmp = static_cast<QList<QObject *>*>(ptr)->at(i); if (i == static_cast<QList<QObject *>*>(ptr)->size()-1) { static_cast<QList<QObject *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QMacToolBarItem___children_setList(void* ptr, void* i)
{
	static_cast<QList<QObject *>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QMacToolBarItem___children_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject *>();
}

void* QMacToolBarItem___dynamicPropertyNames_atList(void* ptr, int i)
{
	return new QByteArray(({QByteArray tmp = static_cast<QList<QByteArray>*>(ptr)->at(i); if (i == static_cast<QList<QByteArray>*>(ptr)->size()-1) { static_cast<QList<QByteArray>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void QMacToolBarItem___dynamicPropertyNames_setList(void* ptr, void* i)
{
	static_cast<QList<QByteArray>*>(ptr)->append(*static_cast<QByteArray*>(i));
}

void* QMacToolBarItem___dynamicPropertyNames_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QByteArray>();
}

void* QMacToolBarItem___findChildren_atList(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QMacToolBarItem___findChildren_setList(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QMacToolBarItem___findChildren_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* QMacToolBarItem___findChildren_atList3(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QMacToolBarItem___findChildren_setList3(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QMacToolBarItem___findChildren_newList3(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void QMacToolBarItem_ChildEventDefault(void* ptr, void* event)
{
		static_cast<QMacToolBarItem*>(ptr)->QMacToolBarItem::childEvent(static_cast<QChildEvent*>(event));
}

void QMacToolBarItem_ConnectNotifyDefault(void* ptr, void* sign)
{
		static_cast<QMacToolBarItem*>(ptr)->QMacToolBarItem::connectNotify(*static_cast<QMetaMethod*>(sign));
}

void QMacToolBarItem_CustomEventDefault(void* ptr, void* event)
{
		static_cast<QMacToolBarItem*>(ptr)->QMacToolBarItem::customEvent(static_cast<QEvent*>(event));
}

void QMacToolBarItem_DeleteLaterDefault(void* ptr)
{
		static_cast<QMacToolBarItem*>(ptr)->QMacToolBarItem::deleteLater();
}

void QMacToolBarItem_DisconnectNotifyDefault(void* ptr, void* sign)
{
		static_cast<QMacToolBarItem*>(ptr)->QMacToolBarItem::disconnectNotify(*static_cast<QMetaMethod*>(sign));
}

char QMacToolBarItem_EventDefault(void* ptr, void* e)
{
		return static_cast<QMacToolBarItem*>(ptr)->QMacToolBarItem::event(static_cast<QEvent*>(e));
}

char QMacToolBarItem_EventFilterDefault(void* ptr, void* watched, void* event)
{
		return static_cast<QMacToolBarItem*>(ptr)->QMacToolBarItem::eventFilter(static_cast<QObject*>(watched), static_cast<QEvent*>(event));
}

void* QMacToolBarItem_MetaObjectDefault(void* ptr)
{
		return const_cast<QMetaObject*>(static_cast<QMacToolBarItem*>(ptr)->QMacToolBarItem::metaObject());
}

void QMacToolBarItem_TimerEventDefault(void* ptr, void* event)
{
		static_cast<QMacToolBarItem*>(ptr)->QMacToolBarItem::timerEvent(static_cast<QTimerEvent*>(event));
}

