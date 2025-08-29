// Display Library for SPI e-paper panels from Dalian Good Display and boards from Waveshare.
// Requires HW SPI and Adafruit_GFX. Caution: the e-paper panels require 3.3V supply AND data lines!
//
// Display Library based on Demo Example from Good Display: https://www.good-display.com/companyfile/32/
//
// Author: Jean-Marc Zingg
//
// Modified: Norbert Walter (Open Boat Projects)
//
// Version: see library.properties
//
// Library: https://github.com/ZinggJM/GxEPD2

#ifndef _GxEPD2_BW_H_
#define _GxEPD2_BW_H_

// Optional full-frame shadow framebuffer (disabled by default)
#ifndef GxEPD2_ENABLE_SHADOW_FB
#define GxEPD2_ENABLE_SHADOW_FB 0
#endif

// uncomment next line to use class GFX of library GFX_Root instead of Adafruit_GFX
//#include <GFX.h>

#ifndef ENABLE_GxEPD2_GFX
// default is off
#define ENABLE_GxEPD2_GFX 0
#endif

#if ENABLE_GxEPD2_GFX
#include "GxEPD2_GFX.h"
#define GxEPD2_GFX_BASE_CLASS GxEPD2_GFX
#elif defined(_GFX_H_)
#define GxEPD2_GFX_BASE_CLASS GFX
#else
#include <Adafruit_GFX.h>
#define GxEPD2_GFX_BASE_CLASS Adafruit_GFX
#endif

#include "GxEPD2_EPD.h"
#include <stdlib.h>
#include <string.h>

// for __has_include see https://en.cppreference.com/w/cpp/preprocessor/include
// see also https://gcc.gnu.org/onlinedocs/cpp/_005f_005fhas_005finclude.html

#if defined __has_include
#  if __has_include("GxEPD2.h")
#    // __has_include can be used
#  else
#    // __has_include doesn't work for us, include anyway
#    undef __has_include
#    define __has_include(x) true
#  endif
#else
#  // no __has_include, include anyway
#  define __has_include(x) true
#endif

#if __has_include("epd/GxEPD2_102.h")
#include "epd/GxEPD2_102.h"
#endif
#if __has_include("epd/GxEPD2_102_GDEP015OC1.h")
#include "epd/GxEPD2_102_GDEP015OC1.h"
#endif
#if __has_include("epd/GxEPD2_102_GDEP015OC1_F3_13.h")
#include "epd/GxEPD2_102_GDEP015OC1_F3_13.h"
#endif
#if __has_include("epd/GxEPD2_102_GDEP015OC1_T8.h")
#include "epd/GxEPD2_102_GDEP015OC1_T8.h"
#endif
#if __has_include("epd/GxEPD2_102_GDEH0154D27.h")
#include "epd/GxEPD2_102_GDEH0154D27.h"
#endif
#if __has_include("epd/GxEPD2_102c_GDEW0154Z04.h")
#include "epd/GxEPD2_102c_GDEW0154Z04.h"
#endif
#if __has_include("epd/GxEPD2_102c_GDEY0154D67.h")
#include "epd/GxEPD2_102c_GDEY0154D67.h"
#endif
#if __has_include("epd/GxEPD2_102c_GDEZ0154D67_TP.h")
#include "epd/GxEPD2_102c_GDEZ0154D67_TP.h"
#endif
#if __has_include("epd/GxEPD2_102c.h")
#include "epd/GxEPD2_102c.h"
#endif
#if __has_include("epd/GxEPD2_102_Z17.h")
#include "epd/GxEPD2_102_Z17.h"
#endif
#if __has_include("epd/GxEPD2_104.h")
#include "epd/GxEPD2_104.h"
#endif
#if __has_include("epd/GxEPD2_104_GDEW0213I5F.h")
#include "epd/GxEPD2_104_GDEW0213I5F.h"
#endif
#if __has_include("epd/GxEPD2_104_GDEW0213T5D.h")
#include "epd/GxEPD2_104_GDEW0213T5D.h"
#endif
#if __has_include("epd/GxEPD2_104_GDEY0213B74.h")
#include "epd/GxEPD2_104_GDEY0213B74.h"
#endif
#if __has_include("epd/GxEPD2_104_GDEW0213I5FD.h")
#include "epd/GxEPD2_104_GDEW0213I5FD.h"
#endif
#if __has_include("epd/GxEPD2_104c_GDEQ0213Z98.h")
#include "epd/GxEPD2_104c_GDEQ0213Z98.h"
#endif
#if __has_include("epd/GxEPD2_104c_GDEY0213Z98.h")
#include "epd/GxEPD2_104c_GDEY0213Z98.h"
#endif
#if __has_include("epd/GxEPD2_104_M21.h")
#include "epd/GxEPD2_104_M21.h"
#endif
#if __has_include("epd/GxEPD2_104_M21b.h")
#include "epd/GxEPD2_104_M21b.h"
#endif
#if __has_include("epd/GxEPD2_104_Z19.h")
#include "epd/GxEPD2_104_Z19.h"
#endif
#if __has_include("epd/GxEPD2_104_T94c.h")
#include "epd/GxEPD2_104_T94c.h"
#endif
#if __has_include("epd/GxEPD2_104_T94_V2.h")
#include "epd/GxEPD2_104_T94_V2.h"
#endif
#if __has_include("epd/GxEPD2_104_B72.h")
#include "epd/GxEPD2_104_B72.h"
#endif
#if __has_include("epd/GxEPD2_104_B73.h")
#include "epd/GxEPD2_104_B73.h"
#endif
#if __has_include("epd/GxEPD2_104_BN.h")
#include "epd/GxEPD2_104_BN.h"
#endif
#if __has_include("epd/GxEPD2_104c.h")
#include "epd/GxEPD2_104c.h"
#endif
#if __has_include("epd/GxEPD2_104c_Z39.h")
#include "epd/GxEPD2_104c_Z39.h"
#endif
#if __has_include("epd/GxEPD2_104c_Z98.h")
#include "epd/GxEPD2_104c_Z98.h"
#endif
#if __has_include("epd/GxEPD2_104c_Z98_T94c.h")
#include "epd/GxEPD2_104c_Z98_T94c.h"
#endif
#if __has_include("epd/GxEPD2_104c_Z98_V2.h")
#include "epd/GxEPD2_104c_Z98_V2.h"
#endif
#if __has_include("epd/GxEPD2_104c_Z98B.h")
#include "epd/GxEPD2_104c_Z98B.h"
#endif
#if __has_include("epd/GxEPD2_154.h")
#include "epd/GxEPD2_154.h"
#endif
#if __has_include("epd/GxEPD2_154c.h")
#include "epd/GxEPD2_154c.h"
#endif
#if __has_include("epd/GxEPD2_154c_GDEH0154Z90.h")
#include "epd/GxEPD2_154c_GDEH0154Z90.h"
#endif
#if __has_include("epd/GxEPD2_154_M09.h")
#include "epd/GxEPD2_154_M09.h"
#endif
#if __has_include("epd/GxEPD2_154_M10.h")
#include "epd/GxEPD2_154_M10.h"
#endif
#if __has_include("epd/GxEPD2_154_M10b.h")
#include "epd/GxEPD2_154_M10b.h"
#endif
#if __has_include("epd/GxEPD2_154_Z90c.h")
#include "epd/GxEPD2_154_Z90c.h"
#endif
#if __has_include("epd/GxEPD2_154_B72.h")
#include "epd/GxEPD2_154_B72.h"
#endif
#if __has_include("epd/GxEPD2_154_B73.h")
#include "epd/GxEPD2_154_B73.h"
#endif
#if __has_include("epd/GxEPD2_154_BN.h")
#include "epd/GxEPD2_154_BN.h"
#endif
#if __has_include("epd/GxEPD2_154_D67.h")
#include "epd/GxEPD2_154_D67.h"
#endif
#if __has_include("epd/GxEPD2_154_T8.h")
#include "epd/GxEPD2_154_T8.h"
#endif
#if __has_include("epd/GxEPD2_154c_GDEH0154D67.h")
#include "epd/GxEPD2_154c_GDEH0154D67.h"
#endif
#if __has_include("epd/GxEPD2_154c_GDEY0154D67.h")
#include "epd/GxEPD2_154c_GDEY0154D67.h"
#endif
#if __has_include("epd/GxEPD2_154c_GDEZ0154D67_TP.h")
#include "epd/GxEPD2_154c_GDEZ0154D67_TP.h"
#endif
#if __has_include("epd/GxEPD2_213.h")
#include "epd/GxEPD2_213.h"
#endif
#if __has_include("epd/GxEPD2_213_I6FD.h")
#include "epd/GxEPD2_213_I6FD.h"
#endif
#if __has_include("epd/GxEPD2_213_B72.h")
#include "epd/GxEPD2_213_B72.h"
#endif
#if __has_include("epd/GxEPD2_213_B73.h")
#include "epd/GxEPD2_213_B73.h"
#endif
#if __has_include("epd/GxEPD2_213c.h")
#include "epd/GxEPD2_213c.h"
#endif
#if __has_include("epd/GxEPD2_213c_Z19.h")
#include "epd/GxEPD2_213c_Z19.h"
#endif
#if __has_include("epd/GxEPD2_213_M21.h")
#include "epd/GxEPD2_213_M21.h"
#endif
#if __has_include("epd/GxEPD2_213_M21b.h")
#include "epd/GxEPD2_213_M21b.h"
#endif
#if __has_include("epd/GxEPD2_213_T94c.h")
#include "epd/GxEPD2_213_T94c.h"
#endif
#if __has_include("epd/GxEPD2_213_T94h.h")
#include "epd/GxEPD2_213_T94h.h"
#endif
#if __has_include("epd/GxEPD2_213_T5D.h")
#include "epd/GxEPD2_213_T5D.h"
#endif
#if __has_include("epd/GxEPD2_213_BN.h")
#include "epd/GxEPD2_213_BN.h"
#endif
#if __has_include("gdey/GxEPD2_213_GDEY0213B74.h")
#include "gdey/GxEPD2_213_GDEY0213B74.h"
#endif
#if __has_include("epd/GxEPD2_260.h")
#include "epd/GxEPD2_260.h"
#endif
#if __has_include("epd/GxEPD2_260_M01.h")
#include "epd/GxEPD2_260_M01.h"
#endif
#if __has_include("epd/GxEPD2_266.h")
#include "epd/GxEPD2_266.h"
#endif
#if __has_include("epd/GxEPD2_266_GDER0266T94.h")
#include "epd/GxEPD2_266_GDER0266T94.h"
#endif
#if __has_include("epd/GxEPD2_266_I6FD.h")
#include "epd/GxEPD2_266_I6FD.h"
#endif
#if __has_include("epd/GxEPD2_266_T94_V2.h")
#include "epd/GxEPD2_266_T94_V2.h"
#endif
#if __has_include("epd/GxEPD2_270.h")
#include "epd/GxEPD2_270.h"
#endif
#if __has_include("epd/GxEPD2_270_M01.h")
#include "epd/GxEPD2_270_M01.h"
#endif
#if __has_include("epd/GxEPD2_290.h")
#include "epd/GxEPD2_290.h"
#endif
#if __has_include("epd/GxEPD2_290_I6FD.h")
#include "epd/GxEPD2_290_I6FD.h"
#endif
#if __has_include("epd/GxEPD2_290_M06.h")
#include "epd/GxEPD2_290_M06.h"
#endif
#if __has_include("epd/GxEPD2_290_T94.h")
#include "epd/GxEPD2_290_T94.h"
#endif
#if __has_include("gdey/GxEPD2_290_GDEY029T94.h")
#include "gdey/GxEPD2_290_GDEY029T94.h"
#endif
#if __has_include("epd/GxEPD2_290_T94_V2.h")
#include "epd/GxEPD2_290_T94_V2.h"
#endif
#if __has_include("epd/GxEPD2_290_T5.h")
#include "epd/GxEPD2_290_T5.h"
#endif
#if __has_include("epd/GxEPD2_290_T5D.h")
#include "epd/GxEPD2_290_T5D.h"
#endif
#if __has_include("epd/GxEPD2_290c.h")
#include "epd/GxEPD2_290c.h"
#endif
#if __has_include("epd/GxEPD2_290c_GDEH029Z13.h")
#include "epd/GxEPD2_290c_GDEH029Z13.h"
#endif
#if __has_include("epd/GxEPD2_290c_GDEQ029Z13.h")
#include "epd/GxEPD2_290c_GDEQ029Z13.h"
#endif
#if __has_include("epd/GxEPD2_290c_M06.h")
#include "epd/GxEPD2_290c_M06.h"
#endif
#if __has_include("epd/GxEPD2_290c_GDEZ029T94.h")
#include "epd/GxEPD2_290c_GDEZ029T94.h"
#endif
#if __has_include("epd/GxEPD2_291.h")
#include "epd/GxEPD2_291.h"
#endif
#if __has_include("epd/GxEPD2_297.h")
#include "epd/GxEPD2_297.h"
#endif
#if __has_include("epd/GxEPD2_297_GDEW029I6F.h")
#include "epd/GxEPD2_297_GDEW029I6F.h"
#endif
#if __has_include("epd/GxEPD2_297_GDEW029T7D.h")
#include "epd/GxEPD2_297_GDEW029T7D.h"
#endif
#if __has_include("epd/GxEPD2_370_T1.h")
#include "epd/GxEPD2_370_T1.h"
#endif
#if __has_include("epd/GxEPD2_370_T2.h")
#include "epd/GxEPD2_370_T2.h"
#endif
#if __has_include("epd/GxEPD2_420.h")
#include "epd/GxEPD2_420.h"
#endif
#if __has_include("epd/GxEPD2_420_I6FD.h")
#include "epd/GxEPD2_420_I6FD.h"
#endif
#if __has_include("epd/GxEPD2_420c.h")
#include "epd/GxEPD2_420c.h"
#endif
#if __has_include("gdey/GxEPD2_420c_GDEY042Z98.h")
#include "gdey/GxEPD2_420c_GDEY042Z98.h"
#endif
#if __has_include("epd/GxEPD2_420_M01.h")
#include "epd/GxEPD2_420_M01.h"
#endif
#if __has_include("epd/GxEPD2_420_T01.h")
#include "epd/GxEPD2_420_T01.h"
#endif
#if __has_include("epd/GxEPD2_420_T01_V2.h")
#include "epd/GxEPD2_420_T01_V2.h"
#endif
#if __has_include("epd/GxEPD2_420_T94_V2.h")
#include "epd/GxEPD2_420_T94_V2.h"
#endif
#if __has_include("epd/GxEPD2_420b_T8.h")
#include "epd/GxEPD2_420b_T8.h"
#endif
#if __has_include("epd/GxEPD2_420b_T94_V2.h")
#include "epd/GxEPD2_420b_T94_V2.h"
#endif
#if __has_include("epd/GxEPD2_420b_GDEY042T91.h")
#include "epd/GxEPD2_420b_GDEY042T91.h"
#endif
#if __has_include("epd/GxEPD2_420b_GDEY042Z98.h")
#include "epd/GxEPD2_420b_GDEY042Z98.h"
#endif
#if __has_include("epd/GxEPD2_513.h")
#include "epd/GxEPD2_513.h"
#endif
#if __has_include("epd/GxEPD2_513_T5.h")
#include "epd/GxEPD2_513_T5.h"
#endif
#if __has_include("epd/GxEPD2_581.h")
#include "epd/GxEPD2_581.h"
#endif
#if __has_include("epd/GxEPD2_583.h")
#include "epd/GxEPD2_583.h"
#endif
#if __has_include("epd/GxEPD2_583c.h")
#include "epd/GxEPD2_583c.h"
#endif
#if __has_include("epd/GxEPD2_583c_GDEY0583Z21.h")
#include "epd/GxEPD2_583c_GDEY0583Z21.h"
#endif
#if __has_include("epd/GxEPD2_583_T8.h")
#include "epd/GxEPD2_583_T8.h"
#endif
#if __has_include("epd/GxEPD2_583_Z83.h")
#include "epd/GxEPD2_583_Z83.h"
#endif
#if __has_include("epd/GxEPD2_583_Z96.h")
#include "epd/GxEPD2_583_Z96.h"
#endif
#if __has_include("epd/GxEPD2_750.h")
#include "epd/GxEPD2_750.h"
#endif
#if __has_include("epd/GxEPD2_750_T7.h")
#include "epd/GxEPD2_750_T7.h"
#endif
#if __has_include("epd/GxEPD2_750_T7c.h")
#include "epd/GxEPD2_750_T7c.h"
#endif
#if __has_include("epd/GxEPD2_750_GDEY075T7.h")
#include "epd/GxEPD2_750_GDEY075T7.h"
#endif
#if __has_include("epd/GxEPD2_750c_Z08.h")
#include "epd/GxEPD2_750c_Z08.h"
#endif
#if __has_include("epd/GxEPD2_750c_Z90.h")
#include "epd/GxEPD2_750c_Z90.h"
#endif
#if __has_include("epd/GxEPD2_750c.h")
#include "epd/GxEPD2_750c.h"
#endif
#if __has_include("epd/GxEPD2_750c_GDEP075Z09.h")
#include "epd/GxEPD2_750c_GDEP075Z09.h"
#endif
#if __has_include("epd/GxEPD2_1248.h")
#include "epd/GxEPD2_1248.h"
#endif

template<typename GxEPD2_Type, const uint16_t page_height>
class GxEPD2_BW : public GxEPD2_GFX_BASE_CLASS
{
  public:
    GxEPD2_Type epd2;
#if ENABLE_GxEPD2_GFX
    GxEPD2_BW(GxEPD2_Type epd2_instance) : GxEPD2_GFX_BASE_CLASS(GxEPD2_Type::WIDTH, GxEPD2_Type::HEIGHT, GxEPD2_Type::WIDTH_VISIBLE, GxEPD2_Type::HEIGHT), epd2(epd2_instance)
#else
    GxEPD2_BW(GxEPD2_Type epd2_instance) : GxEPD2_GFX_BASE_CLASS(GxEPD2_Type::WIDTH, GxEPD2_Type::HEIGHT, GxEPD2_Type::WIDTH_VISIBLE, GxEPD2_Type::HEIGHT), epd2(epd2_instance)
#endif
    {
      _page_height = page_height;
      _pages = (HEIGHT / _page_height) + ((HEIGHT % _page_height) > 0);
      _reverse = (epd2_instance.panel == GxEPD2::GDE0213B1);
      _mirror = false;
      _using_partial_mode = false;
      _current_page = 0;
      // Busy flag guards safe readout of the framebuffer
      _drawing = false;
#if GxEPD2_ENABLE_SHADOW_FB
      // Allocate optional full-frame shadow buffer; holds WIDTH*HEIGHT/8 bytes
      _shadow = nullptr;
      _shadow_size = (GxEPD2_Type::WIDTH / 8) * HEIGHT;
      _shadow = (uint8_t*)malloc(_shadow_size);
      if (_shadow) memset(_shadow, 0xFF, _shadow_size); // initialize to white
#endif
      setFullWindow();
    }

    ~GxEPD2_BW()
    {
#if GxEPD2_ENABLE_SHADOW_FB
      if (_shadow) { free(_shadow); _shadow = nullptr; }
#endif
    }

    uint16_t pages()
    {
      return _pages;
    }

    uint16_t pageHeight()
    {
      return _page_height;
    }

    bool mirror(bool m)
    {
      _swap_ (_mirror, m);
      return m;
    }

    void drawPixel(int16_t x, int16_t y, uint16_t color)
    {
      if ((x < 0) || (x >= width()) || (y < 0) || (y >= height())) return;
      if (_mirror) x = width() - x - 1;
      // check rotation, move pixel around if necessary
      switch (getRotation())
      {
        case 1:
          _swap_(x, y);
          x = WIDTH - x - 1;
          break;
        case 2:
          x = WIDTH - x - 1;
          y = HEIGHT - y - 1;
          break;
        case 3:
          _swap_(x, y);
          y = HEIGHT - y - 1;
          break;
      }
      // transpose partial window to 0,0
      // Remember absolute screen coordinates before window/page subtraction (for shadow FB)
      int16_t abs_x = x;
      int16_t abs_y = y;
      x -= _pw_x;
      if (!_reverse) y -= _pw_y;
      else y = HEIGHT - _pw_y - y - 1;
      // clip to (partial) window
      if ((x < 0) || (x >= int16_t(_pw_w)) || (y < 0) || (y >= int16_t(_pw_h))) return;
      // adjust for current page
      y -= _current_page * _page_height;
      // check if in current page
      if ((y < 0) || (y >= int16_t(_page_height))) return;
      uint16_t i = x / 8 + y * (_pw_w / 8);
      if (color)
        _buffer[i] = (_buffer[i] | (1 << (7 - x % 8)));
      else
        _buffer[i] = (_buffer[i] & (0xFF ^ (1 << (7 - x % 8))));
#if GxEPD2_ENABLE_SHADOW_FB
      // Mirror every pixel write into the full-frame shadow buffer using absolute coords
      if (_shadow && abs_x >= 0 && abs_x < int16_t(WIDTH) && abs_y >= 0 && abs_y < int16_t(HEIGHT))
      {
        uint32_t si = (abs_x / 8) + uint32_t(abs_y) * (GxEPD2_Type::WIDTH / 8);
        if (color) _shadow[si] |=  (1 << (7 - (abs_x % 8)));
        else       _shadow[si] &= ~(1 << (7 - (abs_x % 8)));
      }
#endif
    }

    void init(uint32_t serial_diag_bitrate = 0) // = 0 : disabled
    {
      epd2.init(serial_diag_bitrate);
      _using_partial_mode = false;
      _current_page = 0;
      setFullWindow();
    }

    // init method with additional parameters:
    // initial false for re-init after processor deep sleep wake up, if display power supply was kept
    // this can be used to avoid the repeated initial full refresh on displays with fast partial update
    // NOTE: garbage will result on fast partial update displays, if initial full update is omitted after power loss
    // re-init method may give better results for temporary or second displays after power loss
    void init(uint32_t serial_diag_bitrate, bool initial, uint16_t reset_duration = 0, bool pulldown_rst_mode = false, bool pulldown_cs_mode = false)
    {
      epd2.init(serial_diag_bitrate, initial, reset_duration, pulldown_rst_mode, pulldown_cs_mode);
      _using_partial_mode = false;
      _current_page = 0;
      setFullWindow();
    }

    // initial is for symmetry, not used
    void init(uint32_t serial_diag_bitrate, bool initial, uint16_t reset_duration, bool pulldown_rst_mode, bool pulldown_cs_mode, int8_t busy_level)
    {
      epd2.init(serial_diag_bitrate, initial, reset_duration, pulldown_rst_mode, pulldown_cs_mode, busy_level);
      _using_partial_mode = false;
      _current_page = 0;
      setFullWindow();
    }

    void setRotation(uint8_t r)
    {
      GxEPD2_GFX_BASE_CLASS::setRotation(r);
      setFullWindow();
    }

    void setFullWindow()
    {
      setPartialWindow(0, 0, GxEPD2_Type::WIDTH, HEIGHT);
    }

    void setPartialWindow(uint16_t x, uint16_t y, uint16_t w, uint16_t h)
    {
      x = gx_uint16_min(x, width());
      y = gx_uint16_min(y, height());
      w = gx_uint16_min(w, width() - x);
      h = gx_uint16_min(h, height() - y);
      _rotate(x, y, w, h);
      _pw_x = x;
      if (!_reverse) _pw_y = y;
      else _pw_y = HEIGHT - y - h;
      _pw_w = w;
      _pw_h = h;
      _width_bytes = _pw_w / 8;
      _pixel_bytes = _pw_h * _width_bytes;
    }

    void fillScreen(uint16_t color) // 0x0 black, >0x0 white, to buffer
    {
      uint8_t data = (color == GxEPD_BLACK) ? 0x00 : 0xFF;
      for (uint16_t x = 0; x < sizeof(_buffer); x++)
      {
        _buffer[x] = data;
      }
    }

    // display buffer content to screen, useful for full screen buffer
    void display(bool partial_update_mode = false)
    {
      _drawing = true;
      if (partial_update_mode) epd2.writeImage(_buffer, 0, 0, GxEPD2_Type::WIDTH, _page_height);
      else epd2.writeImageForFullRefresh(_buffer, 0, 0, GxEPD2_Type::WIDTH, _page_height);
      epd2.refresh(partial_update_mode);
      if (epd2.hasFastPartialUpdate)
      {
        epd2.writeImageAgain(_buffer, 0, 0, GxEPD2_Type::WIDTH, _page_height);
      }
      if (!partial_update_mode) epd2.powerOff();
      _drawing = false;
    }

    // display part of buffer content to screen, useful for full screen buffer
    // displayWindow, use parameters according to actual rotation.
    // x and w should be multiple of 8, for rotation 0 or 2,
    // y and h should be multiple of 8, for rotation 1 or 3,
    // else window is increased as needed,
    // this is an ad-hoc method for full buffer height page_height
    void displayWindow(uint16_t x, uint16_t y, uint16_t w, uint16_t h)
    {
      x = gx_uint16_min(x, width());
      y = gx_uint16_min(y, height());
      w = gx_uint16_min(w, width() - x);
      h = gx_uint16_min(h, height() - y);
      _rotate(x, y, w, h);
      uint16_t y_part = _reverse ? HEIGHT - h - y : y;
      epd2.writeImagePart(_buffer, x, y_part, GxEPD2_Type::WIDTH, _page_height, x, y_part, w, h);
      epd2.refresh(x, y_part, w, h);
      if (epd2.hasFastPartialUpdate)
      {
        epd2.writeImagePartAgain(_buffer, x, y_part, GxEPD2_Type::WIDTH, _page_height, x, y_part, w, h);
      }
    }

    void setPartialWindowMaintenance(uint16_t x, uint16_t y, uint16_t w, uint16_t h)
    {
      x = gx_uint16_min(x, width());
      y = gx_uint16_min(y, height());
      w = gx_uint16_min(w, width() - x);
      h = gx_uint16_min(h, height() - y);
      _rotate(x, y, w, h);
      _pw_x = x;
      if (!_reverse) _pw_y = y;
      else _pw_y = HEIGHT - y - h;
      _pw_w = w;
      _pw_h = h;
      _width_bytes = _pw_w / 8;
      _pixel_bytes = _pw_h * _width_bytes;
    }

    void firstPage()
    {
      // Begin of a new frame
      _drawing = true;
#if GxEPD2_ENABLE_SHADOW_FB
      if (_shadow) memset(_shadow, 0xFF, _shadow_size);
#endif
      fillScreen(GxEPD_WHITE);
      _current_page = 0;
      _second_phase = false;
    }

    bool nextPage()
    {
      if (1 == _pages)
      {
        if (_using_partial_mode)
        {
          epd2.writeImage(_buffer, _pw_x, _pw_y, _pw_w, _pw_h);
          epd2.refresh(_pw_x, _pw_y, _pw_w, _pw_h);
          if (epd2.hasFastPartialUpdate)
          {
            _second_phase = true;
            fillScreen(GxEPD_WHITE);
            return true;
          }
        }
        else // full update
        {
          if (!_second_phase) epd2.writeImageForFullRefresh(_buffer, 0, 0, GxEPD2_Type::WIDTH, _page_height);
          else epd2.writeImageAgain(_buffer, 0, 0, GxEPD2_Type::WIDTH, _page_height);
          epd2.refresh(!_using_partial_mode);
          if (epd2.hasFastPartialUpdate)
          {
            _second_phase = true;
            fillScreen(GxEPD_WHITE);
            return true;
          }
          epd2.powerOff();
          _drawing = false;
          return false;
        }
        _drawing = false;
        return false;
      }
      if (_using_partial_mode)
      {
        uint16_t page_ys = _current_page * _page_height;
        uint16_t page_ye = _current_page < int16_t(_pages - 1) ? page_ys + _page_height : HEIGHT;
        uint16_t dest_ys = _pw_y + page_ys; // transposed
        uint16_t dest_ye = gx_uint16_min(_pw_y + _pw_h, _pw_y + page_ye);
        if (dest_ye > dest_ys)
        {
          if (!_second_phase) epd2.writeImage(_buffer, _pw_x, dest_ys, _pw_w, dest_ye - dest_ys);
          else epd2.writeImageAgain(_buffer, _pw_x, dest_ys, _pw_w, dest_ye - dest_ys);
        }
        _current_page++;
        if (_current_page == int16_t(_pages))
        {
          _current_page = 0;
          if (!_second_phase)
          {
            epd2.refresh(_pw_x, _pw_y, _pw_w, _pw_h);
            if (epd2.hasFastPartialUpdate)
            {
              _second_phase = true;
              fillScreen(GxEPD_WHITE);
              return true;
            }
          }
          _drawing = false;
          return false;
        }
        fillScreen(GxEPD_WHITE);
        return true;
      }
      else // full update
      {
        uint16_t page_ys = _current_page * _page_height;
        //uint16_t page_ye = _current_page < _pages - 1 ? page_ys + _page_height : HEIGHT;
        epd2.writeImageForFullRefresh(_buffer, 0, page_ys, GxEPD2_Type::WIDTH, _page_height);
        _current_page++;
        if (_current_page == int16_t(_pages))
        {
          _current_page = 0;
          epd2.refresh(false); // full update
          if (epd2.hasFastPartialUpdate)
          {
            epd2.writeImageAgain(_buffer, 0, 0, GxEPD2_Type::WIDTH, HEIGHT);
            //epd2.refresh(true); // not needed
          }
          epd2.powerOff();
          _drawing = false;
          return false;
        }
        fillScreen(GxEPD_WHITE);
        return true;
      }
    }

    // GxEPD style paged drawing; drawCallback() is called as many times as needed
    void drawPaged(void (*drawCallback)(const void*), const void* pv)
    {
      _drawing = true;
      if (1 == _pages)
      {
#if GxEPD2_ENABLE_SHADOW_FB
        if (_shadow) memset(_shadow, 0xFF, _shadow_size);
#endif
        fillScreen(GxEPD_WHITE);
        drawCallback(pv);
        if (_using_partial_mode)
        {
          epd2.writeImage(_buffer, _pw_x, _pw_y, _pw_w, _pw_h);
          epd2.refresh(_pw_x, _pw_y, _pw_w, _pw_h);
          if (epd2.hasFastPartialUpdate)
          {
            epd2.writeImageAgain(_buffer, _pw_x, _pw_y, _pw_w, _pw_h);
            //epd2.refresh(_pw_x, _pw_y, _pw_w, _pw_h); // not needed
          }
        }
        else // full update
        {
          epd2.writeImageForFullRefresh(_buffer, 0, 0, GxEPD2_Type::WIDTH, HEIGHT);
          epd2.refresh(false);
          if (epd2.hasFastPartialUpdate)
          {
            epd2.writeImageAgain(_buffer, 0, 0, GxEPD2_Type::WIDTH, HEIGHT);
            //epd2.refresh(true); // not needed
          }
          epd2.powerOff();
        }
      _drawing = false;
        return;
      }
      if (_using_partial_mode)
      {
        for (uint16_t phase = 1; phase <= 2; phase++)
        {
          for (_current_page = 0; _current_page < _pages; _current_page++)
          {
            uint16_t page_ys = _current_page * _page_height;
            uint16_t page_ye = _current_page < _pages - 1 ? page_ys + _page_height : HEIGHT;
            uint16_t dest_ys = _pw_y + page_ys; // transposed
            uint16_t dest_ye = gx_uint16_min(_pw_y + _pw_h, _pw_y + page_ye);
            uint16_t h = dest_ye - dest_ys;
            if ((dest_ys < dest_ye) && (h > 0))
            {
              fillScreen(GxEPD_WHITE);
              drawCallback(pv);
              if (phase == 1) epd2.writeImage(_buffer, _pw_x, dest_ys, _pw_w, h);
              else epd2.writeImageAgain(_buffer, _pw_x, dest_ys, _pw_w, h);
            }
            else
            {
              // fillScreen(GxEPD_WHITE); // can't avoid this if needed for writeImage(Again)
            }
          }
          epd2.refresh(_pw_x, _pw_y, _pw_w, _pw_h);
          if (!epd2.hasFastPartialUpdate) break;
          // else make both controller buffers have equal content
        }
      }
      else // full update
      {
        for (_current_page = 0; _current_page < _pages; _current_page++)
        {
          uint16_t page_ys = _current_page * _page_height;
          fillScreen(GxEPD_WHITE);
          drawCallback(pv);
          epd2.writeImageForFullRefresh(_buffer, 0, page_ys, GxEPD2_Type::WIDTH, gx_uint16_min(_page_height, HEIGHT - page_ys));
        }
        epd2.refresh(false); // full update after first phase
        if (epd2.hasFastPartialUpdate)
        {
          // make both controller buffers have equal content
          for (_current_page = 0; _current_page < _pages; _current_page++)
          {
            uint16_t page_ys = _current_page * _page_height;
            fillScreen(GxEPD_WHITE);
            drawCallback(pv);
            epd2.writeImageAgain(_buffer, 0, page_ys, GxEPD2_Type::WIDTH, gx_uint16_min(_page_height, HEIGHT - page_ys));
          }
        }
        epd2.powerOff();
      }
      _current_page = 0;
      _drawing = false;
    }

    void drawPaged(void (*drawCallback)(void))
    {
      drawPaged((void (*)(const void*))drawCallback, 0);
    }

    void drawPaged(void (*drawCallback)(void), uint16_t pages) // for limited RAM
    {
      _pages = pages;
      drawPaged((void (*)(const void*))drawCallback, 0);
      _pages = (HEIGHT / _page_height) + ((HEIGHT % _page_height) > 0);
    }

    void drawPaged(void (*drawCallback)(const void*), const void* pv, uint16_t pages) // for limited RAM
    {
      _pages = pages;
      drawPaged(drawCallback, pv);
      _pages = (HEIGHT / _page_height) + ((HEIGHT % _page_height) > 0);
    }

    void writeScreenBuffer(uint8_t value) // init controller memory often retains old content
    {
      epd2.writeScreenBuffer(value);
    }
    // write to controller memory, without screen refresh; x and w should be multiple of 8
    void writeImage(const uint8_t bitmap[], int16_t x, int16_t y, int16_t w, int16_t h, bool invert = false, bool mirror_y = false, bool pgm = false)
    {
      epd2.writeImage(bitmap, x, y, w, h, invert, mirror_y, pgm);
    }
    void writeImagePart(const uint8_t bitmap[], int16_t x_part, int16_t y_part, int16_t w_bitmap, int16_t h_bitmap,
                        int16_t x, int16_t y, int16_t w, int16_t h, bool invert = false, bool mirror_y = false, bool pgm = false)
    {
      epd2.writeImagePart(bitmap, x_part, y_part, w_bitmap, h_bitmap, x, y, w, h, invert, mirror_y, pgm);
    }
    void writeImage(const uint8_t* black, const uint8_t* color, int16_t x, int16_t y, int16_t w, int16_t h, bool invert, bool mirror_y, bool pgm)
    {
      epd2.writeImage(black, color, x, y, w, h, invert, mirror_y, pgm);
    }
    void writeImagePart(const uint8_t* black, const uint8_t* color, int16_t x_part, int16_t y_part, int16_t w_bitmap, int16_t h_bitmap,
                        int16_t x, int16_t y, int16_t w, int16_t h, bool invert, bool mirror_y, bool pgm)
    {
      epd2.writeImagePart(black, color, x_part, y_part, w_bitmap, h_bitmap, x, y, w, h, invert, mirror_y, pgm);
    }

    //  Support for screen rotation
    void _rotate(uint16_t (&x)[2], uint16_t (&y)[2], uint16_t (&w)[2], uint16_t (&h)[2])
    {
      switch (getRotation())
      {
        case 1:
          _swap_(x[0], y[0]); _swap_(x[1], y[1]);
          _swap_(w[0], h[0]); _swap_(w[1], h[1]);
          x[0] = WIDTH - x[0] - w[0]; x[1] = WIDTH - x[1] - w[1];
          break;
        case 2:
          x[0] = WIDTH - x[0] - w[0]; x[1] = WIDTH - x[1] - w[1];
          y[0] = HEIGHT - y[0] - h[0]; y[1] = HEIGHT - y[1] - h[1];
          break;
        case 3:
          _swap_(x[0], y[0]); _swap_(x[1], y[1]);
          _swap_(w[0], h[0]); _swap_(w[1], h[1]);
          y[0] = HEIGHT - y[0] - h[0]; y[1] = HEIGHT - y[1] - h[1];
          break;
      }
    }

    void refresh(bool partial_update_mode) // screen refresh from controller memory, partial screen or full screen
    {
      epd2.refresh(partial_update_mode);
    }
    void refresh(int16_t x, int16_t y, int16_t w, int16_t h) // screen refresh from controller memory, partial screen
    {
      epd2.refresh(x, y, w, h);
    }
    // turns off generation of panel driving voltages, avoids screen fading over time
    void powerOff()
    {
      epd2.powerOff();
    }
    // turns powerOff() and sets controller to deep sleep for minimum power use, ONLY if wakeable by RST (rst >= 0)
    void hibernate()
    {
      epd2.hibernate();
    }
    // returns a pointer to a stable buffer
    //  - with shadow enabled: full-frame buffer (WIDTH x HEIGHT, stride = WIDTH/8), nullptr while drawing
    //  - with shadow disabled: returns paging buffer (unsafe mid-draw)
    uint8_t* getBuffer() {
#if GxEPD2_ENABLE_SHADOW_FB
      if (_drawing) return nullptr; // not ready during rendering
      return _shadow;               // full-frame buffer
#else
      return _buffer;               // paging buffer (may be partial during drawing)
#endif
    }
    // indicates if buffer is safe to read now
    bool bufferReady() const { return !_drawing; }
  private:
    template <typename T> static inline void
    _swap_(T & a, T & b)
    {
      T t = a;
      a = b;
      b = t;
    };
    static inline uint16_t gx_uint16_min(uint16_t a, uint16_t b)
    {
      return (a < b ? a : b);
    };
    static inline uint16_t gx_uint16_max(uint16_t a, uint16_t b)
    {
      return (a > b ? a : b);
    }
    void _rotate(uint16_t& x, uint16_t& y, uint16_t& w, uint16_t& h)
    {
      switch (getRotation())
      {
        case 1:
          _swap_(x, y);
          _swap_(w, h);
          x = WIDTH - x - w;
          break;
        case 2:
          x = WIDTH - x - w;
          y = HEIGHT - y - h;
          break;
        case 3:
          _swap_(x, y);
          _swap_(w, h);
          y = HEIGHT - y - h;
          break;
      }
    }
  protected:
    uint8_t _buffer[(GxEPD2_Type::WIDTH / 8) * page_height];
    volatile bool _drawing;
#if GxEPD2_ENABLE_SHADOW_FB
    uint8_t* _shadow;
    size_t   _shadow_size;
#endif
  private:
    bool _using_partial_mode, _second_phase, _mirror, _reverse;
    uint16_t _width_bytes, _pixel_bytes;
    int16_t _current_page;
    uint16_t _pages, _page_height;
    uint16_t _pw_x, _pw_y, _pw_w, _pw_h;
};

#endif

