
%group(utilities);
%override;

%insert(utilities_addin_cpp) %{
#include <qlo/objmanual_utilities.hpp>
%}

namespace QuantLibAddin {

    %generate(c++, version);
    %generate(c#, version);
    %generate(countify, version);
    std::string version();

    %generate(c++, ObjectCount);
    %generate(countify, ObjectCount);
    long ObjectCount();

    // temporary hack to extract the accrual start dates from the fixed leg of a swap
    %generate(c#, swapFixedLegAccrualStartDates);
    std::vector<QuantLib::Date> swapFixedLegAccrualStartDates(const std::string &s);
    
    %generate(c#, swaptionExerciseDates);
    std::vector<QuantLib::Date> swaptionExerciseDates(const std::string &s);

    %generate(c#, swaptionExerciseProbabilities);
    std::vector<double> swaptionExerciseProbabilities(const std::string &s);

    %generate(c#, swaptionExerciseRates);
    std::vector<double> swaptionExerciseRates(const std::string &s);    
}
