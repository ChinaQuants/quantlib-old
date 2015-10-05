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

#ifndef qla_interestrateindex_hpp
#define qla_interestrateindex_hpp

#include <qlo/index.hpp>

namespace QuantLib {
    class InterestRateIndex;
};

namespace QuantLibAddin {

    //RP_OBJ_CLASS(InterestRateIndex, Index);
    class InterestRateIndex : public Index {
      public:
        typedef QuantLib::InterestRateIndex lib_type;
        RP_OBJ_CTOR(InterestRateIndex, Index);
    };

    //class InterestRateIndex : public Index {
    //    public:
    //        QuantLib::Natural fixingDays() { return libraryObject_->fixingDays(); }
    //        const QuantLib::DayCounter& dayCounter() { return libraryObject_->dayCounter(); }
    //        QuantLib::Date valueDate(const QuantLib::Date& fixingDate) { return libraryObject_->valueDate(fixingDate); }
    //        QuantLib::Period tenor() { return libraryObject_->tenor(); }
    //    protected:
    //        InterestRateIndex(
    //            const boost::shared_ptr<reposit::ValueObject>& properties,
    //            bool permanent) : Index(properties, permanent) {}
    //};
}

#endif

