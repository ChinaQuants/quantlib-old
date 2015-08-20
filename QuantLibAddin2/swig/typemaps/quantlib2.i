
// These QuantLib types behave like double.
%apply rp_tp_double { QuantLib::Real };
%apply rp_tp_double { QuantLib::Rate };
%apply rp_tp_double { QuantLib::Volatility };

// These QuantLib types behave like any.
%apply rp_tp_any { QuantLib::Date const & };
%apply rp_tp_any { QuantLib::Handle<QuantLib::YieldTermStructure> const & };

// These QuantLib types behave like enum.
%apply rp_tp_enm { QuantLib::Option::Type };
%apply rp_tp_enm { QuantLib::Calendar const & };
%apply rp_tp_enm { QuantLib::DayCounter const & };

// Some types that require overrides within QuantLib, tell reposit to treat them like strings.
%apply rp_tp_string { QuantLib::Handle<QuantLib::BlackVolTermStructure> const & };
%apply rp_tp_string { QuantLib::Handle<QuantLib::Quote> const & };
%apply rp_tp_string { QuantLib::Handle< QuantLib::Quote > const & };
%apply rp_tp_string { QuantLib::Period const & };

// Names of variables after they have been converted.
%apply rp_tp_cnv2 { QuantLib::Date const & };

// Types on which we want to invoke member functions.
%apply rp_tp_add_obj { QuantLibAddin::Index };

// Data types of objects passed as function parameters to be retrieved from the repository
%apply rp_tp_obj1 { const boost::shared_ptr<QuantLib::Index>& };
%apply rp_tp_obj1 { const boost::shared_ptr<QuantLib::PricingEngine>& };
%apply rp_tp_obj1 { const boost::shared_ptr<QuantLib::StrikedTypePayoff>& };
%apply rp_tp_obj1 { const boost::shared_ptr<QuantLib::Exercise>& };
%apply rp_tp_obj1 { const boost::shared_ptr<QuantLib::GeneralizedBlackScholesProcess>& };
