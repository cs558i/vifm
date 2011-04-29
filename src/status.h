/* vifm
 * Copyright (C) 2001 Ken Steen.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

#ifndef __STATUS_H__
#define __STATUS_H__

#include <sys/stat.h>

typedef struct
{
	int need_redraw;
	volatile int freeze;
	volatile int menu;
	int redraw_menu;
	int is_updir;
	int last_char;
	char updir_file[NAME_MAX];
	int is_console;
	time_t config_file_mtime;
	int search;
	int save_msg;
	int use_register;
	int use_input_bar;
	int curr_register;
	int register_saved;
	int number_of_windows;
	int view;
	int show_full;
	int setting_change;
	int skip_history;
	int save_locations; /* for :wq and ZZ */
}Status;

extern Status curr_stats;

void init_status(void);

#endif

/* vim: set tabstop=2 softtabstop=2 shiftwidth=2 noexpandtab : */
