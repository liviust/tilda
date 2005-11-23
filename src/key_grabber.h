/*
 * This is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Library General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef TILDA_KEY_GRABBER_C
#define TILDA_KEY_GRABBER_C

#include <gtk/gtk.h>
#include <confuse.h>
#include "tilda_window.h"

G_BEGIN_DECLS;

void pull (tilda_window *tw);
void *wait_for_signal (tilda_window *tw);

G_END_DECLS;

#endif
