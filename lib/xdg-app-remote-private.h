/*
 * Copyright © 2015 Red Hat, Inc
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *       Alexander Larsson <alexl@redhat.com>
 */

#if !defined (__XDG_APP_H_INSIDE__) && !defined (XDG_APP_COMPILATION)
#error "Only <xdg-app.h> can be included directly."
#endif

#ifndef __XDG_APP_REMOTE_PRIVATE_H__
#define __XDG_APP_REMOTE_PRIVATE_H__

#include <xdg-app-remote.h>
#include <xdg-app-dir.h>
#include <ostree.h>

XdgAppRemote *xdg_app_remote_new (XdgAppDir *dir, const char *name);

#endif /* __XDG_APP_REMOTE_PRIVATE_H__ */
