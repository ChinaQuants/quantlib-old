/* -*- mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*
 Copyright (C) 2006, 2009, 2015 Ferdinando Ametrano
 Copyright (C) 2015 Maddalena Zanzi

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

#include <qlo/objmanual_date2.hpp>
#include <ql/time/imm.hpp>
#include <ql/time/asx.hpp>
#include <ql/time/ecb.hpp>
#include <ql/settings.hpp>

using QuantLib::Size;
using QuantLib::Date;
using QuantLib::Days;
using QuantLib::Period;
using QuantLib::Frequency;
using std::vector;
using std::string;
using QuantLib::IMM;
using QuantLib::ASX;
using QuantLib::ECB;
using QuantLib::Settings;

Period QuantLibAddin::periodFromFrequency(Frequency f) {
    return Period(f);
}

Frequency QuantLibAddin::frequencyFromPeriod(const Period& p) {
    return p.frequency();
}

Period QuantLibAddin::periodEquivalent(const Period& p) {
    return p;
}

vector<Date> QuantLibAddin::IMMNextDates(const Date& date,
                            const vector<bool>& mainCycle) {
    QL_REQUIRE(!mainCycle.empty(), "Main cycle flags vector is empty.");
    Date d = (date == Date() ?
              Date(Settings::instance().evaluationDate()) :
              date);
              vector<Date> out(1, IMM::nextDate(d, mainCycle[0]));

    Size n = mainCycle.size();
    out.reserve(n);
    for (Size i=1; i<n; ++i)
        out.push_back(IMM::nextDate(out[i-1]+1*Days, mainCycle[i]));
    return out;
}

vector<string> QuantLibAddin::IMMNextCodes(const Date& date,
                              const vector<bool>& mainCycle) {
    vector<Date> immDates = IMMNextDates(date, mainCycle);
    vector<string> out;
    Size n = mainCycle.size();
    out.reserve(n);
    for (Size i=0; i<n; ++i)
        out.push_back(IMM::code(immDates[i]));
    return out;
}

vector<Date> QuantLibAddin::ASXNextDates(const Date& date,
                            const vector<bool>& mainCycle) {
    QL_REQUIRE(!mainCycle.empty(), "Main cycle flags vector is empty.");
    Date d = (date == Date() ?
              Date(Settings::instance().evaluationDate()) :
              date);
    vector<Date> out(1, ASX::nextDate(d, mainCycle[0]));

    Size n = mainCycle.size();
    out.reserve(n);
    for (Size i = 1; i<n; ++i)
        out.push_back(ASX::nextDate(out[i - 1] + 1 * Days, mainCycle[i]));
    return out;
}

vector<string> QuantLibAddin::ASXNextCodes(const Date& date,
                              const vector<bool>& mainCycle) {
    vector<Date> asxDates = ASXNextDates(date, mainCycle);
    vector<string> out;
    Size n = mainCycle.size();
    out.reserve(n);
    for (Size i = 0; i<n; ++i)
        out.push_back(ASX::code(asxDates[i]));
    return out;
}

vector<Date> QuantLibAddin::ECBKnownDates() {
    return vector<Date>(ECB::knownDates().begin(),
                        ECB::knownDates().end());
}

/* This function QuantLibAddin::IMMcode is a direct wrapper of QuantLib::IMM::code
and is required only to work around a feature of SWIG where IMM::code is converted
to IMM_code. */
std::string QuantLibAddin::IMMcode(const QuantLib::Date& immDate) {
    return QuantLib::IMM::code(immDate);
}
