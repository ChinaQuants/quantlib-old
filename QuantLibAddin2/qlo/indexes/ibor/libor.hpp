/* -*- mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*
 Copyright (C) 2006, 2007 Ferdinando Ametrano
 Copyright (C) 2005, 2015 Eric Ehlers
 Copyright (C) 2006 Katiuscia Manzoni
 Copyright (C) 2005 Plamen Neykov

 This file is part of QuantLib, a free-software/open-source library
 for financial quantitative analysts and developers - http://quantlib.org/

 QuantLib is free software: you can redistribute it and/or modify it
 under the terms of the QuantLib license.  You should have received a
 copy of the license along with this program; if not, please email
 <quantlib-dev@lists.sf.net>. The license is also available online at
 <http://quantlib.org/license.shtml>.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/

#ifndef qla_libor_hpp
#define qla_libor_hpp

#include <qlo/indexes/iborindex.hpp>

namespace QuantLib {
    class Libor;
    class Sonia;
};

namespace QuantLibAddin {

    class Libor : public IborIndex {
      public:
        typedef QuantLib::Libor lib_type;
        Libor(const boost::shared_ptr<reposit::ValueObject>& properties,
              const QuantLib::Currency& currency,
              const std::string& p,
              const QuantLib::Handle<QuantLib::YieldTermStructure>& hYTS,
              bool permanent);
    };

    class Sonia : public OvernightIndex {
      public:
        typedef QuantLib::Sonia lib_type;
        Sonia(const boost::shared_ptr<reposit::ValueObject>& properties,
              const QuantLib::Handle<QuantLib::YieldTermStructure>& hYTS,
              bool permanent);
    };
}

#endif

