// SPDX-License-Identifier: GPL-2.0+
/*
 * Dan Williams <dcbw@redhat.com>
 *
 * Copyright 2007 - 2019 Red Hat, Inc.
 */

#ifndef NMA_WS_WPA_EAP_H
#define NMA_WS_WPA_EAP_H

typedef struct _NMAWsWpaEap NMAWsWpaEap;

#define NMA_TYPE_WS_WPA_EAP            (nma_ws_wpa_eap_get_type ())
#define NMA_WS_WPA_EAP(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), NMA_TYPE_WS_SAE, NMAWsWpaEap))
#define NMA_WS_WPA_EAP_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), NMA_TYPE_WS_SAE, NMAWsWpaEapClass))
#define NMA_IS_WS_WPA_EAP(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), NMA_TYPE_WS_SAE))
#define NMA_IS_WS_WPA_EAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), NMA_TYPE_WS_SAE))
#define NMA_WS_WPA_EAP_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), NMA_TYPE_WS_SAE, NMAWsWpaEapClass))

GType nma_ws_wpa_eap_get_type (void);

NMAWsWpaEap *nma_ws_wpa_eap_new (NMConnection *connection,
                                 gboolean is_editor,
                                 gboolean secrets_only,
                                 const char *const*secrets_hints);

#endif /* NMA_WS_WPA_EAP_H */
