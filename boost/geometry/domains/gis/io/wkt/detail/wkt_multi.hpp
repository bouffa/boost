// Boost.Geometry (aka GGL, Generic Geometry Library)

// Copyright (c) 2007-2011 Barend Gehrels, Amsterdam, the Netherlands.
// Copyright (c) 2008-2011 Bruno Lalande, Paris, France.
// Copyright (c) 2009-2011 Mateusz Loskot, London, UK.

// Parts of Boost.Geometry are redesigned from Geodan's Geographic Library
// (geolib/GGL), copyright (c) 1995-2010 Geodan, Amsterdam, the Netherlands.

// Use, modification and distribution is subject to the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_GEOMETRY_DOMAINS_GIS_IO_WKT_DETAIL_WKT_MULTI_HPP
#define BOOST_GEOMETRY_DOMAINS_GIS_IO_WKT_DETAIL_WKT_MULTI_HPP


#include <boost/geometry/domains/gis/io/wkt/write.hpp>
#include <boost/geometry/multi/core/tags.hpp>


namespace boost { namespace geometry
{

#ifndef DOXYGEN_NO_DETAIL
namespace detail { namespace wkt {

struct prefix_null
{
    static inline const char* apply() { return ""; }
};

struct prefix_multipoint
{
    static inline const char* apply() { return "MULTIPOINT"; }
};

struct prefix_multilinestring
{
    static inline const char* apply() { return "MULTILINESTRING"; }
};

struct prefix_multipolygon
{
    static inline const char* apply() { return "MULTIPOLYGON"; }
};



}} // namespace wkt::impl
#endif


}} // namespace boost::geometry

#endif // BOOST_GEOMETRY_DOMAINS_GIS_IO_WKT_DETAIL_WKT_MULTI_HPP
