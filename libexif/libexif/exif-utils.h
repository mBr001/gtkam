/* exif-utils.h
 *
 * Copyright (C) 2001 Lutz M�ller <lutz@users.sourceforge.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details. 
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __EXIF_UTILS_H__
#define __EXIF_UTILS_H__

typedef enum _ExifByteOrder ExifByteOrder;
enum _ExifByteOrder {
        EXIF_BYTE_ORDER_MOTOROLA,
        EXIF_BYTE_ORDER_INTEL
};

         int  Get16s (const unsigned char *buf, ExifByteOrder order);
unsigned int  Get16u (const unsigned char *buf, ExifByteOrder order);
         long Get32s (const unsigned char *buf, ExifByteOrder order);
unsigned long Get32u (const unsigned char *buf, ExifByteOrder order);

#endif /* __EXIF_UTILS_H__ */