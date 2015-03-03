// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_X_M2CPolyn5.h"


cEqAppui_X_M2CPolyn5::cEqAppui_X_M2CPolyn5():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,39));
   AddIntRef (cIncIntervale("Orient",39,45));
   Close(false);
}



void cEqAppui_X_M2CPolyn5::ComputeVal()
{
   double tmp0_ = mCompCoord[39];
   double tmp1_ = mCompCoord[40];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[41];
   double tmp7_ = mCompCoord[42];
   double tmp8_ = mLocXTer-tmp7_;
   double tmp9_ = sin(tmp6_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp5_);
   double tmp12_ = cos(tmp6_);
   double tmp13_ = mCompCoord[43];
   double tmp14_ = mLocYTer-tmp13_;
   double tmp15_ = mCompCoord[44];
   double tmp16_ = mLocZTer-tmp15_;
   double tmp17_ = mCompCoord[0];
   double tmp18_ = -(tmp3_);
   double tmp19_ = tmp4_*tmp11_;
   double tmp20_ = tmp3_*tmp11_;
   double tmp21_ = tmp18_*tmp10_;
   double tmp22_ = tmp19_*tmp12_;
   double tmp23_ = tmp21_+tmp22_;
   double tmp24_ = (tmp23_)*(tmp8_);
   double tmp25_ = tmp4_*tmp10_;
   double tmp26_ = tmp20_*tmp12_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = (tmp27_)*(tmp14_);
   double tmp29_ = tmp24_+tmp28_;
   double tmp30_ = tmp2_*tmp12_;
   double tmp31_ = tmp30_*(tmp16_);
   double tmp32_ = tmp29_+tmp31_;
   double tmp33_ = mCompCoord[1];
   double tmp34_ = tmp4_*tmp2_;
   double tmp35_ = tmp34_*(tmp8_);
   double tmp36_ = tmp3_*tmp2_;
   double tmp37_ = tmp36_*(tmp14_);
   double tmp38_ = tmp35_+tmp37_;
   double tmp39_ = tmp5_*(tmp16_);
   double tmp40_ = tmp38_+tmp39_;
   double tmp41_ = (tmp40_)/(tmp32_);
   double tmp42_ = tmp17_*(tmp41_);
   double tmp43_ = tmp33_+tmp42_;
   double tmp44_ = (tmp43_)-mLocPolyn5_State_1_0;
   double tmp45_ = (tmp44_)/mLocPolyn5_State_0_0;
   double tmp46_ = mCompCoord[2];
   double tmp47_ = tmp18_*tmp12_;
   double tmp48_ = tmp19_*tmp9_;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp8_);
   double tmp51_ = tmp4_*tmp12_;
   double tmp52_ = tmp20_*tmp9_;
   double tmp53_ = tmp51_+tmp52_;
   double tmp54_ = (tmp53_)*(tmp14_);
   double tmp55_ = tmp50_+tmp54_;
   double tmp56_ = tmp2_*tmp9_;
   double tmp57_ = tmp56_*(tmp16_);
   double tmp58_ = tmp55_+tmp57_;
   double tmp59_ = (tmp58_)/(tmp32_);
   double tmp60_ = tmp17_*(tmp59_);
   double tmp61_ = tmp46_+tmp60_;
   double tmp62_ = (tmp61_)-mLocPolyn5_State_2_0;
   double tmp63_ = (tmp62_)/mLocPolyn5_State_0_0;
   double tmp64_ = (tmp45_)*(tmp45_);
   double tmp65_ = (tmp63_)*(tmp63_);
   double tmp66_ = tmp64_*(tmp45_);
   double tmp67_ = (tmp63_)*(tmp45_);
   double tmp68_ = tmp67_*(tmp45_);
   double tmp69_ = tmp65_*(tmp45_);
   double tmp70_ = (tmp63_)*tmp65_;
   double tmp71_ = tmp66_*(tmp45_);
   double tmp72_ = tmp68_*(tmp45_);
   double tmp73_ = tmp69_*(tmp45_);
   double tmp74_ = tmp70_*(tmp45_);
   double tmp75_ = (tmp63_)*tmp70_;

  mVal[0] = (mLocPolyn5_State_1_0+(((1+mCompCoord[3])*(tmp45_)+mCompCoord[4]*(tmp63_))-mCompCoord[5]*2*tmp64_+mCompCoord[6]*(tmp45_)*(tmp63_)+mCompCoord[7]*tmp65_)*mLocPolyn5_State_0_0+(mCompCoord[9]*tmp66_+mCompCoord[10]*tmp68_+mCompCoord[11]*tmp69_+mCompCoord[12]*tmp70_+mCompCoord[17]*tmp71_+mCompCoord[18]*tmp72_+mCompCoord[19]*tmp73_+mCompCoord[20]*tmp74_+mCompCoord[21]*tmp75_+mCompCoord[27]*tmp71_*(tmp45_)+mCompCoord[28]*tmp72_*(tmp45_)+mCompCoord[29]*tmp73_*(tmp45_)+mCompCoord[30]*tmp74_*(tmp45_)+mCompCoord[31]*tmp75_*(tmp45_)+mCompCoord[32]*(tmp63_)*tmp75_)*mLocPolyn5_State_0_0)-mLocXIm;

}


void cEqAppui_X_M2CPolyn5::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[39];
   double tmp1_ = mCompCoord[40];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[41];
   double tmp7_ = mCompCoord[42];
   double tmp8_ = mLocXTer-tmp7_;
   double tmp9_ = sin(tmp6_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp5_);
   double tmp12_ = cos(tmp6_);
   double tmp13_ = mCompCoord[43];
   double tmp14_ = mLocYTer-tmp13_;
   double tmp15_ = mCompCoord[44];
   double tmp16_ = mLocZTer-tmp15_;
   double tmp17_ = mCompCoord[0];
   double tmp18_ = -(tmp3_);
   double tmp19_ = tmp4_*tmp11_;
   double tmp20_ = tmp3_*tmp11_;
   double tmp21_ = tmp18_*tmp10_;
   double tmp22_ = tmp19_*tmp12_;
   double tmp23_ = tmp21_+tmp22_;
   double tmp24_ = (tmp23_)*(tmp8_);
   double tmp25_ = tmp4_*tmp10_;
   double tmp26_ = tmp20_*tmp12_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = (tmp27_)*(tmp14_);
   double tmp29_ = tmp24_+tmp28_;
   double tmp30_ = tmp2_*tmp12_;
   double tmp31_ = tmp30_*(tmp16_);
   double tmp32_ = tmp29_+tmp31_;
   double tmp33_ = mCompCoord[1];
   double tmp34_ = tmp4_*tmp2_;
   double tmp35_ = tmp34_*(tmp8_);
   double tmp36_ = tmp3_*tmp2_;
   double tmp37_ = tmp36_*(tmp14_);
   double tmp38_ = tmp35_+tmp37_;
   double tmp39_ = tmp5_*(tmp16_);
   double tmp40_ = tmp38_+tmp39_;
   double tmp41_ = (tmp40_)/(tmp32_);
   double tmp42_ = tmp17_*(tmp41_);
   double tmp43_ = tmp33_+tmp42_;
   double tmp44_ = (tmp43_)-mLocPolyn5_State_1_0;
   double tmp45_ = (tmp44_)/mLocPolyn5_State_0_0;
   double tmp46_ = mCompCoord[2];
   double tmp47_ = tmp18_*tmp12_;
   double tmp48_ = tmp19_*tmp9_;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp8_);
   double tmp51_ = tmp4_*tmp12_;
   double tmp52_ = tmp20_*tmp9_;
   double tmp53_ = tmp51_+tmp52_;
   double tmp54_ = (tmp53_)*(tmp14_);
   double tmp55_ = tmp50_+tmp54_;
   double tmp56_ = tmp2_*tmp9_;
   double tmp57_ = tmp56_*(tmp16_);
   double tmp58_ = tmp55_+tmp57_;
   double tmp59_ = (tmp58_)/(tmp32_);
   double tmp60_ = tmp17_*(tmp59_);
   double tmp61_ = tmp46_+tmp60_;
   double tmp62_ = (tmp61_)-mLocPolyn5_State_2_0;
   double tmp63_ = (tmp62_)/mLocPolyn5_State_0_0;
   double tmp64_ = (tmp45_)*(tmp45_);
   double tmp65_ = (tmp63_)*(tmp63_);
   double tmp66_ = tmp64_*(tmp45_);
   double tmp67_ = (tmp63_)*(tmp45_);
   double tmp68_ = tmp67_*(tmp45_);
   double tmp69_ = tmp65_*(tmp45_);
   double tmp70_ = (tmp63_)*tmp65_;
   double tmp71_ = tmp66_*(tmp45_);
   double tmp72_ = tmp68_*(tmp45_);
   double tmp73_ = tmp69_*(tmp45_);
   double tmp74_ = tmp70_*(tmp45_);
   double tmp75_ = (tmp63_)*tmp70_;
   double tmp76_ = mCompCoord[3];
   double tmp77_ = 1+tmp76_;
   double tmp78_ = ElSquare(mLocPolyn5_State_0_0);
   double tmp79_ = mCompCoord[4];
   double tmp80_ = (tmp41_)*mLocPolyn5_State_0_0;
   double tmp81_ = (tmp80_)/tmp78_;
   double tmp82_ = (tmp81_)*(tmp45_);
   double tmp83_ = mCompCoord[5];
   double tmp84_ = tmp83_*2;
   double tmp85_ = (tmp59_)*mLocPolyn5_State_0_0;
   double tmp86_ = (tmp85_)/tmp78_;
   double tmp87_ = mCompCoord[6];
   double tmp88_ = (tmp86_)*(tmp63_);
   double tmp89_ = mCompCoord[7];
   double tmp90_ = tmp82_+tmp82_;
   double tmp91_ = mCompCoord[9];
   double tmp92_ = (tmp86_)*(tmp45_);
   double tmp93_ = (tmp81_)*(tmp63_);
   double tmp94_ = mCompCoord[10];
   double tmp95_ = tmp88_+tmp88_;
   double tmp96_ = mCompCoord[11];
   double tmp97_ = mCompCoord[12];
   double tmp98_ = (tmp90_)*(tmp45_);
   double tmp99_ = (tmp81_)*tmp64_;
   double tmp100_ = tmp98_+tmp99_;
   double tmp101_ = mCompCoord[17];
   double tmp102_ = tmp92_+tmp93_;
   double tmp103_ = (tmp102_)*(tmp45_);
   double tmp104_ = (tmp81_)*tmp67_;
   double tmp105_ = tmp103_+tmp104_;
   double tmp106_ = mCompCoord[18];
   double tmp107_ = (tmp95_)*(tmp45_);
   double tmp108_ = (tmp81_)*tmp65_;
   double tmp109_ = tmp107_+tmp108_;
   double tmp110_ = mCompCoord[19];
   double tmp111_ = (tmp86_)*tmp65_;
   double tmp112_ = (tmp95_)*(tmp63_);
   double tmp113_ = tmp111_+tmp112_;
   double tmp114_ = mCompCoord[20];
   double tmp115_ = mCompCoord[21];
   double tmp116_ = (tmp100_)*(tmp45_);
   double tmp117_ = (tmp81_)*tmp66_;
   double tmp118_ = tmp116_+tmp117_;
   double tmp119_ = mCompCoord[27];
   double tmp120_ = (tmp105_)*(tmp45_);
   double tmp121_ = (tmp81_)*tmp68_;
   double tmp122_ = tmp120_+tmp121_;
   double tmp123_ = mCompCoord[28];
   double tmp124_ = (tmp109_)*(tmp45_);
   double tmp125_ = (tmp81_)*tmp69_;
   double tmp126_ = tmp124_+tmp125_;
   double tmp127_ = mCompCoord[29];
   double tmp128_ = (tmp113_)*(tmp45_);
   double tmp129_ = (tmp81_)*tmp70_;
   double tmp130_ = tmp128_+tmp129_;
   double tmp131_ = mCompCoord[30];
   double tmp132_ = (tmp86_)*tmp70_;
   double tmp133_ = (tmp113_)*(tmp63_);
   double tmp134_ = tmp132_+tmp133_;
   double tmp135_ = mCompCoord[31];
   double tmp136_ = mCompCoord[32];
   double tmp137_ = mLocPolyn5_State_0_0/tmp78_;
   double tmp138_ = (tmp137_)*(tmp45_);
   double tmp139_ = tmp138_+tmp138_;
   double tmp140_ = (tmp137_)*(tmp63_);
   double tmp141_ = (tmp139_)*(tmp45_);
   double tmp142_ = (tmp137_)*tmp64_;
   double tmp143_ = tmp141_+tmp142_;
   double tmp144_ = tmp140_*(tmp45_);
   double tmp145_ = (tmp137_)*tmp67_;
   double tmp146_ = tmp144_+tmp145_;
   double tmp147_ = (tmp137_)*tmp65_;
   double tmp148_ = (tmp143_)*(tmp45_);
   double tmp149_ = (tmp137_)*tmp66_;
   double tmp150_ = tmp148_+tmp149_;
   double tmp151_ = (tmp146_)*(tmp45_);
   double tmp152_ = (tmp137_)*tmp68_;
   double tmp153_ = tmp151_+tmp152_;
   double tmp154_ = tmp147_*(tmp45_);
   double tmp155_ = (tmp137_)*tmp69_;
   double tmp156_ = tmp154_+tmp155_;
   double tmp157_ = (tmp137_)*tmp70_;
   double tmp158_ = tmp140_+tmp140_;
   double tmp159_ = tmp138_*(tmp45_);
   double tmp160_ = (tmp158_)*(tmp45_);
   double tmp161_ = (tmp158_)*(tmp63_);
   double tmp162_ = tmp147_+tmp161_;
   double tmp163_ = tmp159_*(tmp45_);
   double tmp164_ = tmp160_*(tmp45_);
   double tmp165_ = (tmp162_)*(tmp45_);
   double tmp166_ = (tmp162_)*(tmp63_);
   double tmp167_ = tmp157_+tmp166_;
   double tmp168_ = (tmp137_)*tmp75_;
   double tmp169_ = (tmp45_)*(tmp63_);
   double tmp170_ = tmp71_*(tmp45_);
   double tmp171_ = tmp72_*(tmp45_);
   double tmp172_ = tmp73_*(tmp45_);
   double tmp173_ = tmp74_*(tmp45_);
   double tmp174_ = tmp75_*(tmp45_);
   double tmp175_ = (tmp63_)*tmp75_;
   double tmp176_ = -(1);
   double tmp177_ = tmp176_*tmp3_;
   double tmp178_ = -(tmp4_);
   double tmp179_ = tmp177_*tmp11_;
   double tmp180_ = tmp178_*tmp10_;
   double tmp181_ = tmp179_*tmp12_;
   double tmp182_ = tmp180_+tmp181_;
   double tmp183_ = (tmp182_)*(tmp8_);
   double tmp184_ = tmp177_*tmp10_;
   double tmp185_ = tmp184_+tmp22_;
   double tmp186_ = (tmp185_)*(tmp14_);
   double tmp187_ = tmp183_+tmp186_;
   double tmp188_ = ElSquare(tmp32_);
   double tmp189_ = tmp177_*tmp2_;
   double tmp190_ = tmp189_*(tmp8_);
   double tmp191_ = tmp34_*(tmp14_);
   double tmp192_ = tmp190_+tmp191_;
   double tmp193_ = (tmp192_)*(tmp32_);
   double tmp194_ = (tmp40_)*(tmp187_);
   double tmp195_ = tmp193_-tmp194_;
   double tmp196_ = (tmp195_)/tmp188_;
   double tmp197_ = (tmp196_)*tmp17_;
   double tmp198_ = tmp197_*mLocPolyn5_State_0_0;
   double tmp199_ = (tmp198_)/tmp78_;
   double tmp200_ = (tmp199_)*(tmp45_);
   double tmp201_ = tmp178_*tmp12_;
   double tmp202_ = tmp179_*tmp9_;
   double tmp203_ = tmp201_+tmp202_;
   double tmp204_ = (tmp203_)*(tmp8_);
   double tmp205_ = tmp177_*tmp12_;
   double tmp206_ = tmp205_+tmp48_;
   double tmp207_ = (tmp206_)*(tmp14_);
   double tmp208_ = tmp204_+tmp207_;
   double tmp209_ = (tmp208_)*(tmp32_);
   double tmp210_ = (tmp58_)*(tmp187_);
   double tmp211_ = tmp209_-tmp210_;
   double tmp212_ = (tmp211_)/tmp188_;
   double tmp213_ = (tmp212_)*tmp17_;
   double tmp214_ = tmp213_*mLocPolyn5_State_0_0;
   double tmp215_ = (tmp214_)/tmp78_;
   double tmp216_ = (tmp215_)*(tmp63_);
   double tmp217_ = tmp200_+tmp200_;
   double tmp218_ = (tmp215_)*(tmp45_);
   double tmp219_ = (tmp199_)*(tmp63_);
   double tmp220_ = tmp216_+tmp216_;
   double tmp221_ = (tmp217_)*(tmp45_);
   double tmp222_ = (tmp199_)*tmp64_;
   double tmp223_ = tmp221_+tmp222_;
   double tmp224_ = tmp218_+tmp219_;
   double tmp225_ = (tmp224_)*(tmp45_);
   double tmp226_ = (tmp199_)*tmp67_;
   double tmp227_ = tmp225_+tmp226_;
   double tmp228_ = (tmp220_)*(tmp45_);
   double tmp229_ = (tmp199_)*tmp65_;
   double tmp230_ = tmp228_+tmp229_;
   double tmp231_ = (tmp215_)*tmp65_;
   double tmp232_ = (tmp220_)*(tmp63_);
   double tmp233_ = tmp231_+tmp232_;
   double tmp234_ = (tmp223_)*(tmp45_);
   double tmp235_ = (tmp199_)*tmp66_;
   double tmp236_ = tmp234_+tmp235_;
   double tmp237_ = (tmp227_)*(tmp45_);
   double tmp238_ = (tmp199_)*tmp68_;
   double tmp239_ = tmp237_+tmp238_;
   double tmp240_ = (tmp230_)*(tmp45_);
   double tmp241_ = (tmp199_)*tmp69_;
   double tmp242_ = tmp240_+tmp241_;
   double tmp243_ = (tmp233_)*(tmp45_);
   double tmp244_ = (tmp199_)*tmp70_;
   double tmp245_ = tmp243_+tmp244_;
   double tmp246_ = (tmp215_)*tmp70_;
   double tmp247_ = (tmp233_)*(tmp63_);
   double tmp248_ = tmp246_+tmp247_;
   double tmp249_ = tmp176_*tmp5_;
   double tmp250_ = -(tmp2_);
   double tmp251_ = tmp250_*tmp4_;
   double tmp252_ = tmp250_*tmp3_;
   double tmp253_ = tmp251_*tmp12_;
   double tmp254_ = tmp253_*(tmp8_);
   double tmp255_ = tmp252_*tmp12_;
   double tmp256_ = tmp255_*(tmp14_);
   double tmp257_ = tmp254_+tmp256_;
   double tmp258_ = tmp249_*tmp12_;
   double tmp259_ = tmp258_*(tmp16_);
   double tmp260_ = tmp257_+tmp259_;
   double tmp261_ = tmp249_*tmp4_;
   double tmp262_ = tmp261_*(tmp8_);
   double tmp263_ = tmp249_*tmp3_;
   double tmp264_ = tmp263_*(tmp14_);
   double tmp265_ = tmp262_+tmp264_;
   double tmp266_ = tmp2_*(tmp16_);
   double tmp267_ = tmp265_+tmp266_;
   double tmp268_ = (tmp267_)*(tmp32_);
   double tmp269_ = (tmp40_)*(tmp260_);
   double tmp270_ = tmp268_-tmp269_;
   double tmp271_ = (tmp270_)/tmp188_;
   double tmp272_ = (tmp271_)*tmp17_;
   double tmp273_ = tmp272_*mLocPolyn5_State_0_0;
   double tmp274_ = (tmp273_)/tmp78_;
   double tmp275_ = (tmp274_)*(tmp45_);
   double tmp276_ = tmp251_*tmp9_;
   double tmp277_ = tmp276_*(tmp8_);
   double tmp278_ = tmp252_*tmp9_;
   double tmp279_ = tmp278_*(tmp14_);
   double tmp280_ = tmp277_+tmp279_;
   double tmp281_ = tmp249_*tmp9_;
   double tmp282_ = tmp281_*(tmp16_);
   double tmp283_ = tmp280_+tmp282_;
   double tmp284_ = (tmp283_)*(tmp32_);
   double tmp285_ = (tmp58_)*(tmp260_);
   double tmp286_ = tmp284_-tmp285_;
   double tmp287_ = (tmp286_)/tmp188_;
   double tmp288_ = (tmp287_)*tmp17_;
   double tmp289_ = tmp288_*mLocPolyn5_State_0_0;
   double tmp290_ = (tmp289_)/tmp78_;
   double tmp291_ = (tmp290_)*(tmp63_);
   double tmp292_ = tmp275_+tmp275_;
   double tmp293_ = (tmp290_)*(tmp45_);
   double tmp294_ = (tmp274_)*(tmp63_);
   double tmp295_ = tmp291_+tmp291_;
   double tmp296_ = (tmp292_)*(tmp45_);
   double tmp297_ = (tmp274_)*tmp64_;
   double tmp298_ = tmp296_+tmp297_;
   double tmp299_ = tmp293_+tmp294_;
   double tmp300_ = (tmp299_)*(tmp45_);
   double tmp301_ = (tmp274_)*tmp67_;
   double tmp302_ = tmp300_+tmp301_;
   double tmp303_ = (tmp295_)*(tmp45_);
   double tmp304_ = (tmp274_)*tmp65_;
   double tmp305_ = tmp303_+tmp304_;
   double tmp306_ = (tmp290_)*tmp65_;
   double tmp307_ = (tmp295_)*(tmp63_);
   double tmp308_ = tmp306_+tmp307_;
   double tmp309_ = (tmp298_)*(tmp45_);
   double tmp310_ = (tmp274_)*tmp66_;
   double tmp311_ = tmp309_+tmp310_;
   double tmp312_ = (tmp302_)*(tmp45_);
   double tmp313_ = (tmp274_)*tmp68_;
   double tmp314_ = tmp312_+tmp313_;
   double tmp315_ = (tmp305_)*(tmp45_);
   double tmp316_ = (tmp274_)*tmp69_;
   double tmp317_ = tmp315_+tmp316_;
   double tmp318_ = (tmp308_)*(tmp45_);
   double tmp319_ = (tmp274_)*tmp70_;
   double tmp320_ = tmp318_+tmp319_;
   double tmp321_ = (tmp290_)*tmp70_;
   double tmp322_ = (tmp308_)*(tmp63_);
   double tmp323_ = tmp321_+tmp322_;
   double tmp324_ = -(tmp12_);
   double tmp325_ = tmp176_*tmp9_;
   double tmp326_ = tmp324_*tmp18_;
   double tmp327_ = tmp325_*tmp19_;
   double tmp328_ = tmp326_+tmp327_;
   double tmp329_ = (tmp328_)*(tmp8_);
   double tmp330_ = tmp324_*tmp4_;
   double tmp331_ = tmp325_*tmp20_;
   double tmp332_ = tmp330_+tmp331_;
   double tmp333_ = (tmp332_)*(tmp14_);
   double tmp334_ = tmp329_+tmp333_;
   double tmp335_ = tmp325_*tmp2_;
   double tmp336_ = tmp335_*(tmp16_);
   double tmp337_ = tmp334_+tmp336_;
   double tmp338_ = (tmp40_)*(tmp337_);
   double tmp339_ = -(tmp338_);
   double tmp340_ = tmp339_/tmp188_;
   double tmp341_ = (tmp340_)*tmp17_;
   double tmp342_ = tmp341_*mLocPolyn5_State_0_0;
   double tmp343_ = (tmp342_)/tmp78_;
   double tmp344_ = (tmp343_)*(tmp45_);
   double tmp345_ = tmp325_*tmp18_;
   double tmp346_ = tmp12_*tmp19_;
   double tmp347_ = tmp345_+tmp346_;
   double tmp348_ = (tmp347_)*(tmp8_);
   double tmp349_ = tmp325_*tmp4_;
   double tmp350_ = tmp12_*tmp20_;
   double tmp351_ = tmp349_+tmp350_;
   double tmp352_ = (tmp351_)*(tmp14_);
   double tmp353_ = tmp348_+tmp352_;
   double tmp354_ = tmp12_*tmp2_;
   double tmp355_ = tmp354_*(tmp16_);
   double tmp356_ = tmp353_+tmp355_;
   double tmp357_ = (tmp356_)*(tmp32_);
   double tmp358_ = (tmp58_)*(tmp337_);
   double tmp359_ = tmp357_-tmp358_;
   double tmp360_ = (tmp359_)/tmp188_;
   double tmp361_ = (tmp360_)*tmp17_;
   double tmp362_ = tmp361_*mLocPolyn5_State_0_0;
   double tmp363_ = (tmp362_)/tmp78_;
   double tmp364_ = (tmp363_)*(tmp63_);
   double tmp365_ = tmp344_+tmp344_;
   double tmp366_ = (tmp363_)*(tmp45_);
   double tmp367_ = (tmp343_)*(tmp63_);
   double tmp368_ = tmp364_+tmp364_;
   double tmp369_ = (tmp365_)*(tmp45_);
   double tmp370_ = (tmp343_)*tmp64_;
   double tmp371_ = tmp369_+tmp370_;
   double tmp372_ = tmp366_+tmp367_;
   double tmp373_ = (tmp372_)*(tmp45_);
   double tmp374_ = (tmp343_)*tmp67_;
   double tmp375_ = tmp373_+tmp374_;
   double tmp376_ = (tmp368_)*(tmp45_);
   double tmp377_ = (tmp343_)*tmp65_;
   double tmp378_ = tmp376_+tmp377_;
   double tmp379_ = (tmp363_)*tmp65_;
   double tmp380_ = (tmp368_)*(tmp63_);
   double tmp381_ = tmp379_+tmp380_;
   double tmp382_ = (tmp371_)*(tmp45_);
   double tmp383_ = (tmp343_)*tmp66_;
   double tmp384_ = tmp382_+tmp383_;
   double tmp385_ = (tmp375_)*(tmp45_);
   double tmp386_ = (tmp343_)*tmp68_;
   double tmp387_ = tmp385_+tmp386_;
   double tmp388_ = (tmp378_)*(tmp45_);
   double tmp389_ = (tmp343_)*tmp69_;
   double tmp390_ = tmp388_+tmp389_;
   double tmp391_ = (tmp381_)*(tmp45_);
   double tmp392_ = (tmp343_)*tmp70_;
   double tmp393_ = tmp391_+tmp392_;
   double tmp394_ = (tmp363_)*tmp70_;
   double tmp395_ = (tmp381_)*(tmp63_);
   double tmp396_ = tmp394_+tmp395_;
   double tmp397_ = tmp176_*(tmp23_);
   double tmp398_ = tmp176_*tmp34_;
   double tmp399_ = tmp398_*(tmp32_);
   double tmp400_ = (tmp40_)*tmp397_;
   double tmp401_ = tmp399_-tmp400_;
   double tmp402_ = (tmp401_)/tmp188_;
   double tmp403_ = (tmp402_)*tmp17_;
   double tmp404_ = tmp403_*mLocPolyn5_State_0_0;
   double tmp405_ = (tmp404_)/tmp78_;
   double tmp406_ = (tmp405_)*(tmp45_);
   double tmp407_ = tmp176_*(tmp49_);
   double tmp408_ = tmp407_*(tmp32_);
   double tmp409_ = (tmp58_)*tmp397_;
   double tmp410_ = tmp408_-tmp409_;
   double tmp411_ = (tmp410_)/tmp188_;
   double tmp412_ = (tmp411_)*tmp17_;
   double tmp413_ = tmp412_*mLocPolyn5_State_0_0;
   double tmp414_ = (tmp413_)/tmp78_;
   double tmp415_ = (tmp414_)*(tmp63_);
   double tmp416_ = tmp406_+tmp406_;
   double tmp417_ = (tmp414_)*(tmp45_);
   double tmp418_ = (tmp405_)*(tmp63_);
   double tmp419_ = tmp415_+tmp415_;
   double tmp420_ = (tmp416_)*(tmp45_);
   double tmp421_ = (tmp405_)*tmp64_;
   double tmp422_ = tmp420_+tmp421_;
   double tmp423_ = tmp417_+tmp418_;
   double tmp424_ = (tmp423_)*(tmp45_);
   double tmp425_ = (tmp405_)*tmp67_;
   double tmp426_ = tmp424_+tmp425_;
   double tmp427_ = (tmp419_)*(tmp45_);
   double tmp428_ = (tmp405_)*tmp65_;
   double tmp429_ = tmp427_+tmp428_;
   double tmp430_ = (tmp414_)*tmp65_;
   double tmp431_ = (tmp419_)*(tmp63_);
   double tmp432_ = tmp430_+tmp431_;
   double tmp433_ = (tmp422_)*(tmp45_);
   double tmp434_ = (tmp405_)*tmp66_;
   double tmp435_ = tmp433_+tmp434_;
   double tmp436_ = (tmp426_)*(tmp45_);
   double tmp437_ = (tmp405_)*tmp68_;
   double tmp438_ = tmp436_+tmp437_;
   double tmp439_ = (tmp429_)*(tmp45_);
   double tmp440_ = (tmp405_)*tmp69_;
   double tmp441_ = tmp439_+tmp440_;
   double tmp442_ = (tmp432_)*(tmp45_);
   double tmp443_ = (tmp405_)*tmp70_;
   double tmp444_ = tmp442_+tmp443_;
   double tmp445_ = (tmp414_)*tmp70_;
   double tmp446_ = (tmp432_)*(tmp63_);
   double tmp447_ = tmp445_+tmp446_;
   double tmp448_ = tmp176_*(tmp27_);
   double tmp449_ = tmp176_*tmp36_;
   double tmp450_ = tmp449_*(tmp32_);
   double tmp451_ = (tmp40_)*tmp448_;
   double tmp452_ = tmp450_-tmp451_;
   double tmp453_ = (tmp452_)/tmp188_;
   double tmp454_ = (tmp453_)*tmp17_;
   double tmp455_ = tmp454_*mLocPolyn5_State_0_0;
   double tmp456_ = (tmp455_)/tmp78_;
   double tmp457_ = (tmp456_)*(tmp45_);
   double tmp458_ = tmp176_*(tmp53_);
   double tmp459_ = tmp458_*(tmp32_);
   double tmp460_ = (tmp58_)*tmp448_;
   double tmp461_ = tmp459_-tmp460_;
   double tmp462_ = (tmp461_)/tmp188_;
   double tmp463_ = (tmp462_)*tmp17_;
   double tmp464_ = tmp463_*mLocPolyn5_State_0_0;
   double tmp465_ = (tmp464_)/tmp78_;
   double tmp466_ = (tmp465_)*(tmp63_);
   double tmp467_ = tmp457_+tmp457_;
   double tmp468_ = (tmp465_)*(tmp45_);
   double tmp469_ = (tmp456_)*(tmp63_);
   double tmp470_ = tmp466_+tmp466_;
   double tmp471_ = (tmp467_)*(tmp45_);
   double tmp472_ = (tmp456_)*tmp64_;
   double tmp473_ = tmp471_+tmp472_;
   double tmp474_ = tmp468_+tmp469_;
   double tmp475_ = (tmp474_)*(tmp45_);
   double tmp476_ = (tmp456_)*tmp67_;
   double tmp477_ = tmp475_+tmp476_;
   double tmp478_ = (tmp470_)*(tmp45_);
   double tmp479_ = (tmp456_)*tmp65_;
   double tmp480_ = tmp478_+tmp479_;
   double tmp481_ = (tmp465_)*tmp65_;
   double tmp482_ = (tmp470_)*(tmp63_);
   double tmp483_ = tmp481_+tmp482_;
   double tmp484_ = (tmp473_)*(tmp45_);
   double tmp485_ = (tmp456_)*tmp66_;
   double tmp486_ = tmp484_+tmp485_;
   double tmp487_ = (tmp477_)*(tmp45_);
   double tmp488_ = (tmp456_)*tmp68_;
   double tmp489_ = tmp487_+tmp488_;
   double tmp490_ = (tmp480_)*(tmp45_);
   double tmp491_ = (tmp456_)*tmp69_;
   double tmp492_ = tmp490_+tmp491_;
   double tmp493_ = (tmp483_)*(tmp45_);
   double tmp494_ = (tmp456_)*tmp70_;
   double tmp495_ = tmp493_+tmp494_;
   double tmp496_ = (tmp465_)*tmp70_;
   double tmp497_ = (tmp483_)*(tmp63_);
   double tmp498_ = tmp496_+tmp497_;
   double tmp499_ = tmp176_*tmp30_;
   double tmp500_ = tmp249_*(tmp32_);
   double tmp501_ = (tmp40_)*tmp499_;
   double tmp502_ = tmp500_-tmp501_;
   double tmp503_ = (tmp502_)/tmp188_;
   double tmp504_ = (tmp503_)*tmp17_;
   double tmp505_ = tmp504_*mLocPolyn5_State_0_0;
   double tmp506_ = (tmp505_)/tmp78_;
   double tmp507_ = (tmp506_)*(tmp45_);
   double tmp508_ = tmp176_*tmp56_;
   double tmp509_ = tmp508_*(tmp32_);
   double tmp510_ = (tmp58_)*tmp499_;
   double tmp511_ = tmp509_-tmp510_;
   double tmp512_ = (tmp511_)/tmp188_;
   double tmp513_ = (tmp512_)*tmp17_;
   double tmp514_ = tmp513_*mLocPolyn5_State_0_0;
   double tmp515_ = (tmp514_)/tmp78_;
   double tmp516_ = (tmp515_)*(tmp63_);
   double tmp517_ = tmp507_+tmp507_;
   double tmp518_ = (tmp515_)*(tmp45_);
   double tmp519_ = (tmp506_)*(tmp63_);
   double tmp520_ = tmp516_+tmp516_;
   double tmp521_ = (tmp517_)*(tmp45_);
   double tmp522_ = (tmp506_)*tmp64_;
   double tmp523_ = tmp521_+tmp522_;
   double tmp524_ = tmp518_+tmp519_;
   double tmp525_ = (tmp524_)*(tmp45_);
   double tmp526_ = (tmp506_)*tmp67_;
   double tmp527_ = tmp525_+tmp526_;
   double tmp528_ = (tmp520_)*(tmp45_);
   double tmp529_ = (tmp506_)*tmp65_;
   double tmp530_ = tmp528_+tmp529_;
   double tmp531_ = (tmp515_)*tmp65_;
   double tmp532_ = (tmp520_)*(tmp63_);
   double tmp533_ = tmp531_+tmp532_;
   double tmp534_ = (tmp523_)*(tmp45_);
   double tmp535_ = (tmp506_)*tmp66_;
   double tmp536_ = tmp534_+tmp535_;
   double tmp537_ = (tmp527_)*(tmp45_);
   double tmp538_ = (tmp506_)*tmp68_;
   double tmp539_ = tmp537_+tmp538_;
   double tmp540_ = (tmp530_)*(tmp45_);
   double tmp541_ = (tmp506_)*tmp69_;
   double tmp542_ = tmp540_+tmp541_;
   double tmp543_ = (tmp533_)*(tmp45_);
   double tmp544_ = (tmp506_)*tmp70_;
   double tmp545_ = tmp543_+tmp544_;
   double tmp546_ = (tmp515_)*tmp70_;
   double tmp547_ = (tmp533_)*(tmp63_);
   double tmp548_ = tmp546_+tmp547_;

  mVal[0] = (mLocPolyn5_State_1_0+(((tmp77_)*(tmp45_)+tmp79_*(tmp63_))-tmp84_*tmp64_+tmp87_*tmp169_+tmp89_*tmp65_)*mLocPolyn5_State_0_0+(tmp91_*tmp66_+tmp94_*tmp68_+tmp96_*tmp69_+tmp97_*tmp70_+tmp101_*tmp71_+tmp106_*tmp72_+tmp110_*tmp73_+tmp114_*tmp74_+tmp115_*tmp75_+tmp119_*tmp170_+tmp123_*tmp171_+tmp127_*tmp172_+tmp131_*tmp173_+tmp135_*tmp174_+tmp136_*tmp175_)*mLocPolyn5_State_0_0)-mLocXIm;

  mCompDer[0][0] = (((tmp81_)*(tmp77_)+(tmp86_)*tmp79_)-(tmp90_)*tmp84_+(tmp93_+tmp92_)*tmp87_+(tmp95_)*tmp89_)*mLocPolyn5_State_0_0+((tmp100_)*tmp91_+(tmp105_)*tmp94_+(tmp109_)*tmp96_+(tmp113_)*tmp97_+(tmp118_)*tmp101_+(tmp122_)*tmp106_+(tmp126_)*tmp110_+(tmp130_)*tmp114_+(tmp134_)*tmp115_+((tmp118_)*(tmp45_)+(tmp81_)*tmp71_)*tmp119_+((tmp122_)*(tmp45_)+(tmp81_)*tmp72_)*tmp123_+((tmp126_)*(tmp45_)+(tmp81_)*tmp73_)*tmp127_+((tmp130_)*(tmp45_)+(tmp81_)*tmp74_)*tmp131_+((tmp134_)*(tmp45_)+(tmp81_)*tmp75_)*tmp135_+((tmp86_)*tmp75_+(tmp134_)*(tmp63_))*tmp136_)*mLocPolyn5_State_0_0;
  mCompDer[0][1] = ((tmp137_)*(tmp77_)-(tmp139_)*tmp84_+tmp140_*tmp87_)*mLocPolyn5_State_0_0+((tmp143_)*tmp91_+(tmp146_)*tmp94_+tmp147_*tmp96_+(tmp150_)*tmp101_+(tmp153_)*tmp106_+(tmp156_)*tmp110_+tmp157_*tmp114_+((tmp150_)*(tmp45_)+(tmp137_)*tmp71_)*tmp119_+((tmp153_)*(tmp45_)+(tmp137_)*tmp72_)*tmp123_+((tmp156_)*(tmp45_)+(tmp137_)*tmp73_)*tmp127_+(tmp157_*(tmp45_)+(tmp137_)*tmp74_)*tmp131_+tmp168_*tmp135_)*mLocPolyn5_State_0_0;
  mCompDer[0][2] = ((tmp137_)*tmp79_+tmp138_*tmp87_+(tmp158_)*tmp89_)*mLocPolyn5_State_0_0+(tmp159_*tmp94_+tmp160_*tmp96_+(tmp162_)*tmp97_+tmp163_*tmp106_+tmp164_*tmp110_+tmp165_*tmp114_+(tmp167_)*tmp115_+tmp163_*(tmp45_)*tmp123_+tmp164_*(tmp45_)*tmp127_+tmp165_*(tmp45_)*tmp131_+(tmp167_)*(tmp45_)*tmp135_+(tmp168_+(tmp167_)*(tmp63_))*tmp136_)*mLocPolyn5_State_0_0;
  mCompDer[0][3] = (tmp45_)*mLocPolyn5_State_0_0;
  mCompDer[0][4] = (tmp63_)*mLocPolyn5_State_0_0;
  mCompDer[0][5] = -(2*tmp64_)*mLocPolyn5_State_0_0;
  mCompDer[0][6] = tmp169_*mLocPolyn5_State_0_0;
  mCompDer[0][7] = tmp65_*mLocPolyn5_State_0_0;
  mCompDer[0][8] = 0;
  mCompDer[0][9] = tmp66_*mLocPolyn5_State_0_0;
  mCompDer[0][10] = tmp68_*mLocPolyn5_State_0_0;
  mCompDer[0][11] = tmp69_*mLocPolyn5_State_0_0;
  mCompDer[0][12] = tmp70_*mLocPolyn5_State_0_0;
  mCompDer[0][13] = 0;
  mCompDer[0][14] = 0;
  mCompDer[0][15] = 0;
  mCompDer[0][16] = 0;
  mCompDer[0][17] = tmp71_*mLocPolyn5_State_0_0;
  mCompDer[0][18] = tmp72_*mLocPolyn5_State_0_0;
  mCompDer[0][19] = tmp73_*mLocPolyn5_State_0_0;
  mCompDer[0][20] = tmp74_*mLocPolyn5_State_0_0;
  mCompDer[0][21] = tmp75_*mLocPolyn5_State_0_0;
  mCompDer[0][22] = 0;
  mCompDer[0][23] = 0;
  mCompDer[0][24] = 0;
  mCompDer[0][25] = 0;
  mCompDer[0][26] = 0;
  mCompDer[0][27] = tmp170_*mLocPolyn5_State_0_0;
  mCompDer[0][28] = tmp171_*mLocPolyn5_State_0_0;
  mCompDer[0][29] = tmp172_*mLocPolyn5_State_0_0;
  mCompDer[0][30] = tmp173_*mLocPolyn5_State_0_0;
  mCompDer[0][31] = tmp174_*mLocPolyn5_State_0_0;
  mCompDer[0][32] = tmp175_*mLocPolyn5_State_0_0;
  mCompDer[0][33] = 0;
  mCompDer[0][34] = 0;
  mCompDer[0][35] = 0;
  mCompDer[0][36] = 0;
  mCompDer[0][37] = 0;
  mCompDer[0][38] = 0;
  mCompDer[0][39] = (((tmp199_)*(tmp77_)+(tmp215_)*tmp79_)-(tmp217_)*tmp84_+(tmp219_+tmp218_)*tmp87_+(tmp220_)*tmp89_)*mLocPolyn5_State_0_0+((tmp223_)*tmp91_+(tmp227_)*tmp94_+(tmp230_)*tmp96_+(tmp233_)*tmp97_+(tmp236_)*tmp101_+(tmp239_)*tmp106_+(tmp242_)*tmp110_+(tmp245_)*tmp114_+(tmp248_)*tmp115_+((tmp236_)*(tmp45_)+(tmp199_)*tmp71_)*tmp119_+((tmp239_)*(tmp45_)+(tmp199_)*tmp72_)*tmp123_+((tmp242_)*(tmp45_)+(tmp199_)*tmp73_)*tmp127_+((tmp245_)*(tmp45_)+(tmp199_)*tmp74_)*tmp131_+((tmp248_)*(tmp45_)+(tmp199_)*tmp75_)*tmp135_+((tmp215_)*tmp75_+(tmp248_)*(tmp63_))*tmp136_)*mLocPolyn5_State_0_0;
  mCompDer[0][40] = (((tmp274_)*(tmp77_)+(tmp290_)*tmp79_)-(tmp292_)*tmp84_+(tmp294_+tmp293_)*tmp87_+(tmp295_)*tmp89_)*mLocPolyn5_State_0_0+((tmp298_)*tmp91_+(tmp302_)*tmp94_+(tmp305_)*tmp96_+(tmp308_)*tmp97_+(tmp311_)*tmp101_+(tmp314_)*tmp106_+(tmp317_)*tmp110_+(tmp320_)*tmp114_+(tmp323_)*tmp115_+((tmp311_)*(tmp45_)+(tmp274_)*tmp71_)*tmp119_+((tmp314_)*(tmp45_)+(tmp274_)*tmp72_)*tmp123_+((tmp317_)*(tmp45_)+(tmp274_)*tmp73_)*tmp127_+((tmp320_)*(tmp45_)+(tmp274_)*tmp74_)*tmp131_+((tmp323_)*(tmp45_)+(tmp274_)*tmp75_)*tmp135_+((tmp290_)*tmp75_+(tmp323_)*(tmp63_))*tmp136_)*mLocPolyn5_State_0_0;
  mCompDer[0][41] = (((tmp343_)*(tmp77_)+(tmp363_)*tmp79_)-(tmp365_)*tmp84_+(tmp367_+tmp366_)*tmp87_+(tmp368_)*tmp89_)*mLocPolyn5_State_0_0+((tmp371_)*tmp91_+(tmp375_)*tmp94_+(tmp378_)*tmp96_+(tmp381_)*tmp97_+(tmp384_)*tmp101_+(tmp387_)*tmp106_+(tmp390_)*tmp110_+(tmp393_)*tmp114_+(tmp396_)*tmp115_+((tmp384_)*(tmp45_)+(tmp343_)*tmp71_)*tmp119_+((tmp387_)*(tmp45_)+(tmp343_)*tmp72_)*tmp123_+((tmp390_)*(tmp45_)+(tmp343_)*tmp73_)*tmp127_+((tmp393_)*(tmp45_)+(tmp343_)*tmp74_)*tmp131_+((tmp396_)*(tmp45_)+(tmp343_)*tmp75_)*tmp135_+((tmp363_)*tmp75_+(tmp396_)*(tmp63_))*tmp136_)*mLocPolyn5_State_0_0;
  mCompDer[0][42] = (((tmp405_)*(tmp77_)+(tmp414_)*tmp79_)-(tmp416_)*tmp84_+(tmp418_+tmp417_)*tmp87_+(tmp419_)*tmp89_)*mLocPolyn5_State_0_0+((tmp422_)*tmp91_+(tmp426_)*tmp94_+(tmp429_)*tmp96_+(tmp432_)*tmp97_+(tmp435_)*tmp101_+(tmp438_)*tmp106_+(tmp441_)*tmp110_+(tmp444_)*tmp114_+(tmp447_)*tmp115_+((tmp435_)*(tmp45_)+(tmp405_)*tmp71_)*tmp119_+((tmp438_)*(tmp45_)+(tmp405_)*tmp72_)*tmp123_+((tmp441_)*(tmp45_)+(tmp405_)*tmp73_)*tmp127_+((tmp444_)*(tmp45_)+(tmp405_)*tmp74_)*tmp131_+((tmp447_)*(tmp45_)+(tmp405_)*tmp75_)*tmp135_+((tmp414_)*tmp75_+(tmp447_)*(tmp63_))*tmp136_)*mLocPolyn5_State_0_0;
  mCompDer[0][43] = (((tmp456_)*(tmp77_)+(tmp465_)*tmp79_)-(tmp467_)*tmp84_+(tmp469_+tmp468_)*tmp87_+(tmp470_)*tmp89_)*mLocPolyn5_State_0_0+((tmp473_)*tmp91_+(tmp477_)*tmp94_+(tmp480_)*tmp96_+(tmp483_)*tmp97_+(tmp486_)*tmp101_+(tmp489_)*tmp106_+(tmp492_)*tmp110_+(tmp495_)*tmp114_+(tmp498_)*tmp115_+((tmp486_)*(tmp45_)+(tmp456_)*tmp71_)*tmp119_+((tmp489_)*(tmp45_)+(tmp456_)*tmp72_)*tmp123_+((tmp492_)*(tmp45_)+(tmp456_)*tmp73_)*tmp127_+((tmp495_)*(tmp45_)+(tmp456_)*tmp74_)*tmp131_+((tmp498_)*(tmp45_)+(tmp456_)*tmp75_)*tmp135_+((tmp465_)*tmp75_+(tmp498_)*(tmp63_))*tmp136_)*mLocPolyn5_State_0_0;
  mCompDer[0][44] = (((tmp506_)*(tmp77_)+(tmp515_)*tmp79_)-(tmp517_)*tmp84_+(tmp519_+tmp518_)*tmp87_+(tmp520_)*tmp89_)*mLocPolyn5_State_0_0+((tmp523_)*tmp91_+(tmp527_)*tmp94_+(tmp530_)*tmp96_+(tmp533_)*tmp97_+(tmp536_)*tmp101_+(tmp539_)*tmp106_+(tmp542_)*tmp110_+(tmp545_)*tmp114_+(tmp548_)*tmp115_+((tmp536_)*(tmp45_)+(tmp506_)*tmp71_)*tmp119_+((tmp539_)*(tmp45_)+(tmp506_)*tmp72_)*tmp123_+((tmp542_)*(tmp45_)+(tmp506_)*tmp73_)*tmp127_+((tmp545_)*(tmp45_)+(tmp506_)*tmp74_)*tmp131_+((tmp548_)*(tmp45_)+(tmp506_)*tmp75_)*tmp135_+((tmp515_)*tmp75_+(tmp548_)*(tmp63_))*tmp136_)*mLocPolyn5_State_0_0;
}


void cEqAppui_X_M2CPolyn5::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_X_M2CPolyn5 Has no Der Sec");
}

void cEqAppui_X_M2CPolyn5::SetPolyn5_State_0_0(double aVal){ mLocPolyn5_State_0_0 = aVal;}
void cEqAppui_X_M2CPolyn5::SetPolyn5_State_1_0(double aVal){ mLocPolyn5_State_1_0 = aVal;}
void cEqAppui_X_M2CPolyn5::SetPolyn5_State_2_0(double aVal){ mLocPolyn5_State_2_0 = aVal;}
void cEqAppui_X_M2CPolyn5::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_X_M2CPolyn5::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppui_X_M2CPolyn5::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppui_X_M2CPolyn5::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppui_X_M2CPolyn5::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Polyn5_State_0_0") return & mLocPolyn5_State_0_0;
   if (aName == "Polyn5_State_1_0") return & mLocPolyn5_State_1_0;
   if (aName == "Polyn5_State_2_0") return & mLocPolyn5_State_2_0;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_X_M2CPolyn5::mTheAuto("cEqAppui_X_M2CPolyn5",cEqAppui_X_M2CPolyn5::Alloc);


cElCompiledFonc *  cEqAppui_X_M2CPolyn5::Alloc()
{  return new cEqAppui_X_M2CPolyn5();
}


