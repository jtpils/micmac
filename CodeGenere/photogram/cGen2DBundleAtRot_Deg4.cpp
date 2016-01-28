// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cGen2DBundleAtRot_Deg4.h"


cGen2DBundleAtRot_Deg4::cGen2DBundleAtRot_Deg4():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("CX",3,18));
   AddIntRef (cIncIntervale("CY",18,33));
   AddIntRef (cIncIntervale("Tmp_PTer",0,3));
   Close(false);
}



void cGen2DBundleAtRot_Deg4::ComputeVal()
{
   double tmp0_ = mLocRotPt_y-mLocCentrAttR_y;
   double tmp1_ = (tmp0_)/mLocAmplAttR;
   double tmp2_ = mLocRotPt_x-mLocCentrAttR_x;
   double tmp3_ = (tmp2_)/mLocAmplAttR;
   double tmp4_ = ElSquare(tmp1_);
   double tmp5_ = ElSquare(tmp3_);
   double tmp6_ = VCube(tmp1_);
   double tmp7_ = VCube(tmp3_);
   double tmp8_ = VPow4(tmp1_);
   double tmp9_ = VPow4(tmp3_);
   double tmp10_ = mCompCoord[0];
   double tmp11_ = mCompCoord[1];
   double tmp12_ = mCompCoord[2];

  mVal[0] = (mCompCoord[3]+mCompCoord[4]*(tmp1_)+mCompCoord[5]*(tmp3_)+mCompCoord[6]*tmp4_+mCompCoord[7]*(tmp3_)*(tmp1_)+mCompCoord[8]*tmp5_+mCompCoord[9]*tmp6_+mCompCoord[10]*(tmp3_)*tmp4_+mCompCoord[11]*tmp5_*(tmp1_)+mCompCoord[12]*tmp7_+mCompCoord[13]*tmp8_+mCompCoord[14]*(tmp3_)*tmp6_+mCompCoord[15]*tmp5_*tmp4_+mCompCoord[16]*tmp7_*(tmp1_)+mCompCoord[17]*tmp9_)-mLocDepR1_x*tmp10_-mLocDepR2_x*tmp11_-mLocDepR3_x*tmp12_;

  mVal[1] = (mCompCoord[18]+mCompCoord[19]*(tmp1_)+mCompCoord[20]*(tmp3_)+mCompCoord[21]*tmp4_+mCompCoord[22]*(tmp3_)*(tmp1_)+mCompCoord[23]*tmp5_+mCompCoord[24]*tmp6_+mCompCoord[25]*(tmp3_)*tmp4_+mCompCoord[26]*tmp5_*(tmp1_)+mCompCoord[27]*tmp7_+mCompCoord[28]*tmp8_+mCompCoord[29]*(tmp3_)*tmp6_+mCompCoord[30]*tmp5_*tmp4_+mCompCoord[31]*tmp7_*(tmp1_)+mCompCoord[32]*tmp9_)-mLocDepR1_y*tmp10_-mLocDepR2_y*tmp11_-mLocDepR3_y*tmp12_;

}


void cGen2DBundleAtRot_Deg4::ComputeValDeriv()
{
   double tmp0_ = mLocRotPt_y-mLocCentrAttR_y;
   double tmp1_ = (tmp0_)/mLocAmplAttR;
   double tmp2_ = mLocRotPt_x-mLocCentrAttR_x;
   double tmp3_ = (tmp2_)/mLocAmplAttR;
   double tmp4_ = ElSquare(tmp1_);
   double tmp5_ = ElSquare(tmp3_);
   double tmp6_ = VCube(tmp1_);
   double tmp7_ = VCube(tmp3_);
   double tmp8_ = VPow4(tmp1_);
   double tmp9_ = VPow4(tmp3_);
   double tmp10_ = mCompCoord[0];
   double tmp11_ = mCompCoord[1];
   double tmp12_ = mCompCoord[2];
   double tmp13_ = (tmp3_)*(tmp1_);
   double tmp14_ = (tmp3_)*tmp4_;
   double tmp15_ = tmp5_*(tmp1_);
   double tmp16_ = (tmp3_)*tmp6_;
   double tmp17_ = tmp5_*tmp4_;
   double tmp18_ = tmp7_*(tmp1_);

  mVal[0] = (mCompCoord[3]+mCompCoord[4]*(tmp1_)+mCompCoord[5]*(tmp3_)+mCompCoord[6]*tmp4_+mCompCoord[7]*(tmp3_)*(tmp1_)+mCompCoord[8]*tmp5_+mCompCoord[9]*tmp6_+mCompCoord[10]*(tmp3_)*tmp4_+mCompCoord[11]*tmp5_*(tmp1_)+mCompCoord[12]*tmp7_+mCompCoord[13]*tmp8_+mCompCoord[14]*(tmp3_)*tmp6_+mCompCoord[15]*tmp5_*tmp4_+mCompCoord[16]*tmp7_*(tmp1_)+mCompCoord[17]*tmp9_)-mLocDepR1_x*tmp10_-mLocDepR2_x*tmp11_-mLocDepR3_x*tmp12_;

  mCompDer[0][0] = -(mLocDepR1_x);
  mCompDer[0][1] = -(mLocDepR2_x);
  mCompDer[0][2] = -(mLocDepR3_x);
  mCompDer[0][3] = 1;
  mCompDer[0][4] = tmp1_;
  mCompDer[0][5] = tmp3_;
  mCompDer[0][6] = tmp4_;
  mCompDer[0][7] = tmp13_;
  mCompDer[0][8] = tmp5_;
  mCompDer[0][9] = tmp6_;
  mCompDer[0][10] = tmp14_;
  mCompDer[0][11] = tmp15_;
  mCompDer[0][12] = tmp7_;
  mCompDer[0][13] = tmp8_;
  mCompDer[0][14] = tmp16_;
  mCompDer[0][15] = tmp17_;
  mCompDer[0][16] = tmp18_;
  mCompDer[0][17] = tmp9_;
  mCompDer[0][18] = 0;
  mCompDer[0][19] = 0;
  mCompDer[0][20] = 0;
  mCompDer[0][21] = 0;
  mCompDer[0][22] = 0;
  mCompDer[0][23] = 0;
  mCompDer[0][24] = 0;
  mCompDer[0][25] = 0;
  mCompDer[0][26] = 0;
  mCompDer[0][27] = 0;
  mCompDer[0][28] = 0;
  mCompDer[0][29] = 0;
  mCompDer[0][30] = 0;
  mCompDer[0][31] = 0;
  mCompDer[0][32] = 0;
  mVal[1] = (mCompCoord[18]+mCompCoord[19]*(tmp1_)+mCompCoord[20]*(tmp3_)+mCompCoord[21]*tmp4_+mCompCoord[22]*(tmp3_)*(tmp1_)+mCompCoord[23]*tmp5_+mCompCoord[24]*tmp6_+mCompCoord[25]*(tmp3_)*tmp4_+mCompCoord[26]*tmp5_*(tmp1_)+mCompCoord[27]*tmp7_+mCompCoord[28]*tmp8_+mCompCoord[29]*(tmp3_)*tmp6_+mCompCoord[30]*tmp5_*tmp4_+mCompCoord[31]*tmp7_*(tmp1_)+mCompCoord[32]*tmp9_)-mLocDepR1_y*tmp10_-mLocDepR2_y*tmp11_-mLocDepR3_y*tmp12_;

  mCompDer[1][0] = -(mLocDepR1_y);
  mCompDer[1][1] = -(mLocDepR2_y);
  mCompDer[1][2] = -(mLocDepR3_y);
  mCompDer[1][3] = 0;
  mCompDer[1][4] = 0;
  mCompDer[1][5] = 0;
  mCompDer[1][6] = 0;
  mCompDer[1][7] = 0;
  mCompDer[1][8] = 0;
  mCompDer[1][9] = 0;
  mCompDer[1][10] = 0;
  mCompDer[1][11] = 0;
  mCompDer[1][12] = 0;
  mCompDer[1][13] = 0;
  mCompDer[1][14] = 0;
  mCompDer[1][15] = 0;
  mCompDer[1][16] = 0;
  mCompDer[1][17] = 0;
  mCompDer[1][18] = 1;
  mCompDer[1][19] = tmp1_;
  mCompDer[1][20] = tmp3_;
  mCompDer[1][21] = tmp4_;
  mCompDer[1][22] = tmp13_;
  mCompDer[1][23] = tmp5_;
  mCompDer[1][24] = tmp6_;
  mCompDer[1][25] = tmp14_;
  mCompDer[1][26] = tmp15_;
  mCompDer[1][27] = tmp7_;
  mCompDer[1][28] = tmp8_;
  mCompDer[1][29] = tmp16_;
  mCompDer[1][30] = tmp17_;
  mCompDer[1][31] = tmp18_;
  mCompDer[1][32] = tmp9_;
}


void cGen2DBundleAtRot_Deg4::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cGen2DBundleAtRot_Deg4 Has no Der Sec");
}

void cGen2DBundleAtRot_Deg4::SetAmplAttR(double aVal){ mLocAmplAttR = aVal;}
void cGen2DBundleAtRot_Deg4::SetCentrAttR_x(double aVal){ mLocCentrAttR_x = aVal;}
void cGen2DBundleAtRot_Deg4::SetCentrAttR_y(double aVal){ mLocCentrAttR_y = aVal;}
void cGen2DBundleAtRot_Deg4::SetDepR1_x(double aVal){ mLocDepR1_x = aVal;}
void cGen2DBundleAtRot_Deg4::SetDepR1_y(double aVal){ mLocDepR1_y = aVal;}
void cGen2DBundleAtRot_Deg4::SetDepR2_x(double aVal){ mLocDepR2_x = aVal;}
void cGen2DBundleAtRot_Deg4::SetDepR2_y(double aVal){ mLocDepR2_y = aVal;}
void cGen2DBundleAtRot_Deg4::SetDepR3_x(double aVal){ mLocDepR3_x = aVal;}
void cGen2DBundleAtRot_Deg4::SetDepR3_y(double aVal){ mLocDepR3_y = aVal;}
void cGen2DBundleAtRot_Deg4::SetRotPt_x(double aVal){ mLocRotPt_x = aVal;}
void cGen2DBundleAtRot_Deg4::SetRotPt_y(double aVal){ mLocRotPt_y = aVal;}



double * cGen2DBundleAtRot_Deg4::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "AmplAttR") return & mLocAmplAttR;
   if (aName == "CentrAttR_x") return & mLocCentrAttR_x;
   if (aName == "CentrAttR_y") return & mLocCentrAttR_y;
   if (aName == "DepR1_x") return & mLocDepR1_x;
   if (aName == "DepR1_y") return & mLocDepR1_y;
   if (aName == "DepR2_x") return & mLocDepR2_x;
   if (aName == "DepR2_y") return & mLocDepR2_y;
   if (aName == "DepR3_x") return & mLocDepR3_x;
   if (aName == "DepR3_y") return & mLocDepR3_y;
   if (aName == "RotPt_x") return & mLocRotPt_x;
   if (aName == "RotPt_y") return & mLocRotPt_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cGen2DBundleAtRot_Deg4::mTheAuto("cGen2DBundleAtRot_Deg4",cGen2DBundleAtRot_Deg4::Alloc);


cElCompiledFonc *  cGen2DBundleAtRot_Deg4::Alloc()
{  return new cGen2DBundleAtRot_Deg4();
}


