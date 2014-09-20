
%feature("rp:group", "payoffs");
%feature("rp:obj_include") %{
#include <ql/instruments/payoffs.hpp>
%}

namespace QuantLib {
    class PlainVanillaPayoff {
      public:
        PlainVanillaPayoff(QuantLib::Option::Type optionType,
                           QuantLib::Real strike);
    };
}

%feature("rp:group", "");
