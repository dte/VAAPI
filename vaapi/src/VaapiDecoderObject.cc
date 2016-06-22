

#include "./VaapiDecoderObject.h"

#include <string>
#include <iostream>






VaapiDecoderObject::VaapiDecoderObject() {


  decoderCreated = false;
  
  precalled = false;
  
}

VaapiDecoderObject::~VaapiDecoderObject() {
  
  
  if (decoderCreated){
  };
  
}


// decoding ----------------------------------------------------------------------------
extern "C" {

int pre(void);
int decode();

int doTheThing();

};


void VaapiDecoderObject::demo1() {

    doTheThing();

    //pre();
    //decode();

}


// ------------------------------------------------------------------------------------------------------------------------------





