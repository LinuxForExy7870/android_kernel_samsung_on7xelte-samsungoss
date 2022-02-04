/*
 *
 * (C) COPYRIGHT 2012-2013, 2015 ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU licence.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can access it online at
 * http://www.gnu.org/licenses/gpl-2.0.html.
 *
 * SPDX-License-Identifier: GPL-2.0
 *
 */



#ifndef _KBASE_UTILITY_H
#define _KBASE_UTILITY_H

#ifndef _KBASE_H_
#error "Don't include this file directly, use mali_kbase.h instead"
#endif

/** Test whether the given list entry is a member of the given list.
 *
 * @param base      The head of the list to be tested
 * @param entry     The list entry to be tested
 *
 * @return          true if entry is a member of base
 *                  false otherwise
 */
bool kbasep_list_member_of(const struct list_head *base, struct list_head *entry);

#endif				/* _KBASE_UTILITY_H */