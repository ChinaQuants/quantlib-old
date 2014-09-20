
// rp_val_* - valueobjects
// These typemaps generate source code for cpp and hpp files in the qlo/valueobjects directory.

// *** BEGIN typemap rp_tm_val_prm
// This typemap generates code in the valueobject cpp and hpp files
// which declares the types of the inputs to the valuobject constructor.

%typemap(rp_tm_val_prm) ql_val_dbl "double";
%typemap(rp_tm_val_prm) ql_val_str "const std::string&";
%typemap(rp_tm_val_prm) ql_val_any "const ObjectHandler::property_t&";

// *** END   typemap rp_tm_val_prm

// *** BEGIN typemap rp_tm_val_dcl
// This typemap generates code in the valueobject hpp file
// which declares the types of the member variables.

%typemap(rp_tm_val_dcl) ql_val_dbl "double $1_name_";
%typemap(rp_tm_val_dcl) ql_val_str "std::string $1_name_";
%typemap(rp_tm_val_dcl) ql_val_any "ObjectHandler::property_t $1_name_";

// *** END   typemap rp_tm_val_dcl

// *** BEGIN typemap rp_tm_val_cnv
// This typemap generates cpp code which converts a valueobject property from "any" (const ObjectHandler::property_t&)
// to the type of the valueobject member variable, which is either a native C++ type, or any.

%typemap(rp_tm_val_cnv) ql_val_dbl "ObjectHandler::convert2<double>(value)";
%typemap(rp_tm_val_cnv) ql_val_str "ObjectHandler::convert2<std::string>(value)";
// No conversion is required for values of type "any" (const ObjectHandler::property_t&)
%typemap(rp_tm_val_cnv) ql_val_any "value";

// *** END   typemap rp_tm_val_cnv
