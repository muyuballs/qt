// +build !minimal

#pragma once

#ifndef GO_QTMACEXTRAS_H
#define GO_QTMACEXTRAS_H

#include <stdint.h>

#ifdef __cplusplus
int QMacPasteboardMime_QMacPasteboardMime_QRegisterMetaType();
int QMacToolBar_QMacToolBar_QRegisterMetaType();
int QMacToolBarItem_QMacToolBarItem_QRegisterMetaType();
extern "C" {
#endif

struct QtMacExtras_PackedString { char* data; long long len; void* ptr; };
struct QtMacExtras_PackedList { void* data; long long len; };
char QMacPasteboardMime_CanConvert(void* ptr, struct QtMacExtras_PackedString mime, struct QtMacExtras_PackedString flav);
struct QtMacExtras_PackedList QMacPasteboardMime_ConvertFromMime(void* ptr, struct QtMacExtras_PackedString mime, void* data, struct QtMacExtras_PackedString flav);
void* QMacPasteboardMime_ConvertToMime(void* ptr, struct QtMacExtras_PackedString mime, void* data, struct QtMacExtras_PackedString flav);
struct QtMacExtras_PackedString QMacPasteboardMime_ConvertorName(void* ptr);
struct QtMacExtras_PackedString QMacPasteboardMime_FlavorFor(void* ptr, struct QtMacExtras_PackedString mime);
struct QtMacExtras_PackedString QMacPasteboardMime_MimeFor(void* ptr, struct QtMacExtras_PackedString flav);
void* QMacPasteboardMime___convertFromMime_atList(void* ptr, int i);
void QMacPasteboardMime___convertFromMime_setList(void* ptr, void* i);
void* QMacPasteboardMime___convertFromMime_newList(void* ptr);
void* QMacPasteboardMime___convertToMime_data_atList(void* ptr, int i);
void QMacPasteboardMime___convertToMime_data_setList(void* ptr, void* i);
void* QMacPasteboardMime___convertToMime_data_newList(void* ptr);
void* QMacToolBar___allowedItems_atList(void* ptr, int i);
void QMacToolBar___allowedItems_setList(void* ptr, void* i);
void* QMacToolBar___allowedItems_newList(void* ptr);
void* QMacToolBar___items_atList(void* ptr, int i);
void QMacToolBar___items_setList(void* ptr, void* i);
void* QMacToolBar___items_newList(void* ptr);
void* QMacToolBar___setAllowedItems_allowedItems_atList(void* ptr, int i);
void QMacToolBar___setAllowedItems_allowedItems_setList(void* ptr, void* i);
void* QMacToolBar___setAllowedItems_allowedItems_newList(void* ptr);
void* QMacToolBar___setItems_items_atList(void* ptr, int i);
void QMacToolBar___setItems_items_setList(void* ptr, void* i);
void* QMacToolBar___setItems_items_newList(void* ptr);
void* QMacToolBar___children_atList(void* ptr, int i);
void QMacToolBar___children_setList(void* ptr, void* i);
void* QMacToolBar___children_newList(void* ptr);
void* QMacToolBar___dynamicPropertyNames_atList(void* ptr, int i);
void QMacToolBar___dynamicPropertyNames_setList(void* ptr, void* i);
void* QMacToolBar___dynamicPropertyNames_newList(void* ptr);
void* QMacToolBar___findChildren_atList(void* ptr, int i);
void QMacToolBar___findChildren_setList(void* ptr, void* i);
void* QMacToolBar___findChildren_newList(void* ptr);
void* QMacToolBar___findChildren_atList3(void* ptr, int i);
void QMacToolBar___findChildren_setList3(void* ptr, void* i);
void* QMacToolBar___findChildren_newList3(void* ptr);
void QMacToolBar_ChildEventDefault(void* ptr, void* event);
void QMacToolBar_ConnectNotifyDefault(void* ptr, void* sign);
void QMacToolBar_CustomEventDefault(void* ptr, void* event);
void QMacToolBar_DeleteLaterDefault(void* ptr);
void QMacToolBar_DisconnectNotifyDefault(void* ptr, void* sign);
char QMacToolBar_EventDefault(void* ptr, void* e);
char QMacToolBar_EventFilterDefault(void* ptr, void* watched, void* event);
void* QMacToolBar_MetaObjectDefault(void* ptr);
void QMacToolBar_TimerEventDefault(void* ptr, void* event);
void* QMacToolBarItem_NewQMacToolBarItem(void* parent);
void QMacToolBarItem_ConnectActivated(void* ptr, long long t);
void QMacToolBarItem_DisconnectActivated(void* ptr);
void QMacToolBarItem_Activated(void* ptr);
void* QMacToolBarItem_Icon(void* ptr);
char QMacToolBarItem_Selectable(void* ptr);
void QMacToolBarItem_SetIcon(void* ptr, void* icon);
void QMacToolBarItem_SetSelectable(void* ptr, char selectable);
void QMacToolBarItem_SetStandardItem(void* ptr, long long standardItem);
void QMacToolBarItem_SetText(void* ptr, struct QtMacExtras_PackedString text);
long long QMacToolBarItem_StandardItem(void* ptr);
struct QtMacExtras_PackedString QMacToolBarItem_Text(void* ptr);
void QMacToolBarItem_DestroyQMacToolBarItem(void* ptr);
void QMacToolBarItem_DestroyQMacToolBarItemDefault(void* ptr);
void* QMacToolBarItem___children_atList(void* ptr, int i);
void QMacToolBarItem___children_setList(void* ptr, void* i);
void* QMacToolBarItem___children_newList(void* ptr);
void* QMacToolBarItem___dynamicPropertyNames_atList(void* ptr, int i);
void QMacToolBarItem___dynamicPropertyNames_setList(void* ptr, void* i);
void* QMacToolBarItem___dynamicPropertyNames_newList(void* ptr);
void* QMacToolBarItem___findChildren_atList(void* ptr, int i);
void QMacToolBarItem___findChildren_setList(void* ptr, void* i);
void* QMacToolBarItem___findChildren_newList(void* ptr);
void* QMacToolBarItem___findChildren_atList3(void* ptr, int i);
void QMacToolBarItem___findChildren_setList3(void* ptr, void* i);
void* QMacToolBarItem___findChildren_newList3(void* ptr);
void QMacToolBarItem_ChildEventDefault(void* ptr, void* event);
void QMacToolBarItem_ConnectNotifyDefault(void* ptr, void* sign);
void QMacToolBarItem_CustomEventDefault(void* ptr, void* event);
void QMacToolBarItem_DeleteLaterDefault(void* ptr);
void QMacToolBarItem_DisconnectNotifyDefault(void* ptr, void* sign);
char QMacToolBarItem_EventDefault(void* ptr, void* e);
char QMacToolBarItem_EventFilterDefault(void* ptr, void* watched, void* event);
void* QMacToolBarItem_MetaObjectDefault(void* ptr);
void QMacToolBarItem_TimerEventDefault(void* ptr, void* event);

#ifdef __cplusplus
}
#endif

#endif