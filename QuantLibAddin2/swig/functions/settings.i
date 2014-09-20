
%feature("rp:group", "settings");

%feature("rp:override_obj");

namespace QuantLibAddin {
    void settingsSetEvaluationDate(const QuantLib::Date& evalDate);
    std::string dateToString(const QuantLib::Date& d);
}

%feature("rp:override_obj", "");

%feature("rp:group", "");
