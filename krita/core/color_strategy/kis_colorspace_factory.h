/*
 *  Copyright (c) 2003 Patrick Julien  <freak@codepimps.org>
 *  Copyright (c) 2004 Cyrille Berger <cberger@cberger.net>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#if !defined KIS_COLORSPACE_FACTORY_H_
#define KIS_COLORSPACE_FACTORY_H_

#include "kis_types.h"
#include "kis_generic_factory.h"

class QStringList;

class KisColorSpaceFactory : public KisGenericFactory<KisStrategyColorSpaceSP> {

public:
	virtual ~KisColorSpaceFactory();

public:
	KisStrategyColorSpaceSP colorSpace(const QString& name) const KDE_DEPRECATED;
	QStringList listColorSpaceNames() const KDE_DEPRECATED;
public:
	static KisColorSpaceFactory* singleton();
	
private:
	KisColorSpaceFactory();
	KisColorSpaceFactory(const KisColorSpaceFactory&);
	KisColorSpaceFactory operator=(const KisColorSpaceFactory&);

private:
	static KisColorSpaceFactory *m_singleton;
};

#endif // KIS_COLORSPACE_FACTORY_H_

