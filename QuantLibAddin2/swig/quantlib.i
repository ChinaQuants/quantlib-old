
%module(
    rp_obj_dir="../qlo",
    rp_add_dir="../AddinCpp",
    rp_cfy_dir="../AddinCfy",
    rp_xll_dir="../../QuantLibXL2/qlxl",
    rp_obj_inc="qlo",
    rp_add_inc="AddinCpp",
    rp_xll_inc="qlxl",
    rp_cfy_inc="AddinCfy"
) QuantLibAddin

%include typemaps/all.i
%include functions/all.i
