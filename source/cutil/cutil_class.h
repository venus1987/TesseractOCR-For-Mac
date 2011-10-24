///////////////////////////////////////////////////////////////////////
// File:        cutil.h
// Description: cutil class.
// Author:      Samuel Charron
//
// (C) Copyright 2006, Google Inc.
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
///////////////////////////////////////////////////////////////////////

#ifndef TESSERACT_CUTIL_CUTIL_CLASS_H__
#define TESSERACT_CUTIL_CUTIL_CLASS_H__

#include "ccutil.h"
#include "tessclas.h"
#include "const.h"
#include "strngs.h"

namespace tesseract {

class CUtil : public CCUtil {
 public:
  CUtil();
  ~CUtil();
  void read_variables(const char *filename, bool global_only);
 public:
  TBLOB *pageblobs;                /*first blob on page */
  TEXTBLOCK *pageblocks;           /*first block on page */

  int resolution;                  /*scanner res in dpi */
  int acts[MAXPROC];               /*action flags */
  int debugs[MAXPROC];             /*debug flags */
  int plots[MAXPROC];              /*plot flags */

  int corners[4];                  /*corners of scan window */

  char *debugfile;                 /* debug file name */

  int plots_fx;
  int plots_ocr;

  int debugs_fx;
  int debugs_ocr;

  int acts_fx;
  int acts_ocr;

  char *demodir;                   /*demo home directory */
};

}  // namespace tesseract

#endif  // TESSERACT_CUTIL_CUTIL_CLASS_H__
