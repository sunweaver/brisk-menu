/*
 * This file is part of brisk-menu.
 *
 * Copyright © 2017-2018 Brisk Menu Developers
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#pragma once

#include "../entry-button.h"
#include <glib-object.h>
#include <gtk/gtk.h>

G_BEGIN_DECLS

typedef struct _BriskClassicEntryButton BriskClassicEntryButton;
typedef struct _BriskClassicEntryButtonClass BriskClassicEntryButtonClass;

struct _BriskClassicEntryButtonClass {
        BriskMenuEntryButtonClass parent_class;
};

/**
 * BriskClassicEntryButton implements support for favourites in Brisk
 */
struct _BriskClassicEntryButton {
        BriskMenuEntryButton parent;

        /* Basic button layout */
        GtkWidget *label;
        GtkWidget *image;
};

#define BRISK_TYPE_CLASSIC_ENTRY_BUTTON brisk_classic_entry_button_get_type()
#define BRISK_CLASSIC_ENTRY_BUTTON(o)                                                              \
        (G_TYPE_CHECK_INSTANCE_CAST((o), BRISK_TYPE_CLASSIC_ENTRY_BUTTON, BriskClassicEntryButton))
#define BRISK_IS_CLASSIC_ENTRY_BUTTON(o)                                                           \
        (G_TYPE_CHECK_INSTANCE_TYPE((o), BRISK_TYPE_CLASSIC_ENTRY_BUTTON))
#define BRISK_CLASSIC_ENTRY_BUTTON_CLASS(o)                                                        \
        (G_TYPE_CHECK_CLASS_CAST((o),                                                              \
                                 BRISK_TYPE_CLASSIC_ENTRY_BUTTON,                                  \
                                 BriskClassicEntryButtonClass))
#define BRISK_IS_CLASSIC_ENTRY_BUTTON_CLASS(o)                                                     \
        (G_TYPE_CHECK_CLASS_TYPE((o), BRISK_TYPE_CLASSIC_ENTRY_BUTTON))
#define BRISK_CLASSIC_ENTRY_BUTTON_GET_CLASS(o)                                                    \
        (G_TYPE_INSTANCE_GET_CLASS((o),                                                            \
                                   BRISK_TYPE_CLASSIC_ENTRY_BUTTON,                                \
                                   BriskClassicEntryButtonClass))

GType brisk_classic_entry_button_get_type(void);

BriskMenuEntryButton *brisk_classic_entry_button_new(BriskMenuLauncher *launcher, BriskItem *item);

G_END_DECLS

/*
 * Editor modelines  -  https://www.wireshark.org/tools/modelines.html
 *
 * Local variables:
 * c-basic-offset: 8
 * tab-width: 8
 * indent-tabs-mode: nil
 * End:
 *
 * vi: set shiftwidth=8 tabstop=8 expandtab:
 * :indentSize=8:tabSize=8:noTabs=true:
 */
