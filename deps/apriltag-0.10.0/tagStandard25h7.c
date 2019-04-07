/* Copyright (C) 2013-2016, The Regents of The University of Michigan.
All rights reserved.
This software was developed in the APRIL Robotics Lab under the
direction of Edwin Olson, ebolson@umich.edu. This software may be
available under alternative licensing terms; contact the address above.
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
The views and conclusions contained in the software and documentation are those
of the authors and should not be interpreted as representing official policies,
either expressed or implied, of the Regents of The University of Michigan.
*/

#include <stdlib.h>
#include "apriltag.h"

apriltag_family_t *tagStandard25h7_create()
{
   apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
   tf->name = strdup("tagStandard25h7");
   tf->h = 7;
   tf->ncodes = 361;
   tf->codes = calloc(361, sizeof(uint64_t));
   tf->codes[0] = 0x00000000012d6b83UL;
   tf->codes[1] = 0x0000000001bc7148UL;
   tf->codes[2] = 0x00000000004b770dUL;
   tf->codes[3] = 0x0000000000da7cd2UL;
   tf->codes[4] = 0x0000000001698297UL;
   tf->codes[5] = 0x0000000001f8885cUL;
   tf->codes[6] = 0x0000000001a599abUL;
   tf->codes[7] = 0x0000000000349f70UL;
   tf->codes[8] = 0x0000000000c3a535UL;
   tf->codes[9] = 0x000000000152aafaUL;
   tf->codes[10] = 0x000000000070b684UL;
   tf->codes[11] = 0x00000000018ec20eUL;
   tf->codes[12] = 0x0000000001cad922UL;
   tf->codes[13] = 0x000000000059dee7UL;
   tf->codes[14] = 0x0000000000e8e4acUL;
   tf->codes[15] = 0x0000000001b40185UL;
   tf->codes[16] = 0x000000000043074aUL;
   tf->codes[17] = 0x0000000000d20d0fUL;
   tf->codes[18] = 0x0000000001f01899UL;
   tf->codes[19] = 0x00000000010e2423UL;
   tf->codes[20] = 0x00000000019d29e8UL;
   tf->codes[21] = 0x00000000002c2fadUL;
   tf->codes[22] = 0x0000000001d940fcUL;
   tf->codes[23] = 0x0000000000155810UL;
   tf->codes[24] = 0x0000000001c2695fUL;
   tf->codes[25] = 0x00000000008d8638UL;
   tf->codes[26] = 0x00000000011c8bfdUL;
   tf->codes[27] = 0x0000000001ab91c2UL;
   tf->codes[28] = 0x00000000003a9787UL;
   tf->codes[29] = 0x000000000158a311UL;
   tf->codes[30] = 0x000000000076ae9bUL;
   tf->codes[31] = 0x000000000105b460UL;
   tf->codes[32] = 0x000000000194ba25UL;
   tf->codes[33] = 0x000000000023bfeaUL;
   tf->codes[34] = 0x0000000000b2c5afUL;
   tf->codes[35] = 0x00000000009bee12UL;
   tf->codes[36] = 0x0000000000c12d89UL;
   tf->codes[37] = 0x0000000001df3913UL;
   tf->codes[38] = 0x0000000000fd449dUL;
   tf->codes[39] = 0x0000000000aa55ecUL;
   tf->codes[40] = 0x0000000001395bb1UL;
   tf->codes[41] = 0x0000000001eda0edUL;
   tf->codes[42] = 0x000000000029b801UL;
   tf->codes[43] = 0x000000000147c38bUL;
   tf->codes[44] = 0x0000000001d6c950UL;
   tf->codes[45] = 0x000000000183da9fUL;
   tf->codes[46] = 0x0000000000a1e629UL;
   tf->codes[47] = 0x0000000000ddfd3dUL;
   tf->codes[48] = 0x00000000011a1451UL;
   tf->codes[49] = 0x0000000001562b65UL;
   tf->codes[50] = 0x0000000000b04e03UL;
   tf->codes[51] = 0x0000000000ec6517UL;
   tf->codes[52] = 0x00000000017b6adcUL;
   tf->codes[53] = 0x0000000001287c2bUL;
   tf->codes[54] = 0x000000000164933fUL;
   tf->codes[55] = 0x0000000001f39904UL;
   tf->codes[56] = 0x000000000111a48eUL;
   tf->codes[57] = 0x000000000172fb19UL;
   tf->codes[58] = 0x0000000001af122dUL;
   tf->codes[59] = 0x0000000001eb2941UL;
   tf->codes[60] = 0x00000000007a2f06UL;
   tf->codes[61] = 0x0000000001f9911bUL;
   tf->codes[62] = 0x000000000035a82fUL;
   tf->codes[63] = 0x0000000000c4adf4UL;
   tf->codes[64] = 0x000000000096febaUL;
   tf->codes[65] = 0x0000000001621b93UL;
   tf->codes[66] = 0x0000000001da49bbUL;
   tf->codes[67] = 0x0000000000f85545UL;
   tf->codes[68] = 0x0000000000a56694UL;
   tf->codes[69] = 0x00000000011d94bcUL;
   tf->codes[70] = 0x0000000000caa60bUL;
   tf->codes[71] = 0x000000000106bd1fUL;
   tf->codes[72] = 0x0000000000861f34UL;
   tf->codes[73] = 0x0000000001513c0dUL;
   tf->codes[74] = 0x0000000000ab5eabUL;
   tf->codes[75] = 0x000000000094870eUL;
   tf->codes[76] = 0x00000000002ac0c0UL;
   tf->codes[77] = 0x000000000013e923UL;
   tf->codes[78] = 0x0000000000d69639UL;
   tf->codes[79] = 0x000000000003099dUL;
   tf->codes[80] = 0x0000000000920f62UL;
   tf->codes[81] = 0x00000000003f20b1UL;
   tf->codes[82] = 0x00000000015d2c3bUL;
   tf->codes[83] = 0x00000000010a3d8aUL;
   tf->codes[84] = 0x000000000199434fUL;
   tf->codes[85] = 0x000000000101cdc7UL;
   tf->codes[86] = 0x0000000001632452UL;
   tf->codes[87] = 0x000000000017698eUL;
   tf->codes[88] = 0x0000000001ada340UL;
   tf->codes[89] = 0x000000000078c019UL;
   tf->codes[90] = 0x000000000196cba3UL;
   tf->codes[91] = 0x0000000000ac676aUL;
   tf->codes[92] = 0x0000000001249592UL;
   tf->codes[93] = 0x00000000002bc97fUL;
   tf->codes[94] = 0x000000000185ec1dUL;
   tf->codes[95] = 0x0000000001c20331UL;
   tf->codes[96] = 0x00000000005108f6UL;
   tf->codes[97] = 0x000000000166a4bdUL;
   tf->codes[98] = 0x0000000001750c97UL;
   tf->codes[99] = 0x0000000001c5839cUL;
   tf->codes[100] = 0x0000000001e84b67UL;
   tf->codes[101] = 0x000000000060798fUL;
   tf->codes[102] = 0x0000000000d8a7b7UL;
   tf->codes[103] = 0x000000000085b906UL;
   tf->codes[104] = 0x0000000001a3c490UL;
   tf->codes[105] = 0x00000000012326a5UL;
   tf->codes[106] = 0x0000000001a9bca7UL;
   tf->codes[107] = 0x00000000015cc60dUL;
   tf->codes[108] = 0x00000000005b8a37UL;
   tf->codes[109] = 0x0000000001c414afUL;
   tf->codes[110] = 0x000000000157d6b5UL;
   tf->codes[111] = 0x0000000001cb1585UL;
   tf->codes[112] = 0x0000000001d705b3UL;
   tf->codes[113] = 0x0000000001312851UL;
   tf->codes[114] = 0x0000000001ce95f0UL;
   tf->codes[115] = 0x0000000000973b1dUL;
   tf->codes[116] = 0x0000000001b546a7UL;
   tf->codes[117] = 0x00000000019e6f0aUL;
   tf->codes[118] = 0x0000000000ab9b0eUL;
   tf->codes[119] = 0x0000000001323110UL;
   tf->codes[120] = 0x0000000001577087UL;
   tf->codes[121] = 0x0000000001f4de26UL;
   tf->codes[122] = 0x0000000001382927UL;
   tf->codes[123] = 0x0000000001b3d7baUL;
   tf->codes[124] = 0x0000000000d1e344UL;
   tf->codes[125] = 0x0000000000bb0ba7UL;
   tf->codes[126] = 0x0000000001fe56a8UL;
   tf->codes[127] = 0x0000000000db5bc6UL;
   tf->codes[128] = 0x00000000003306b8UL;
   tf->codes[129] = 0x0000000001ec0835UL;
   tf->codes[130] = 0x000000000122fcdaUL;
   tf->codes[131] = 0x000000000120852eUL;
   tf->codes[132] = 0x00000000009d6f97UL;
   tf->codes[133] = 0x0000000000264a2eUL;
   tf->codes[134] = 0x00000000015eadc0UL;
   tf->codes[135] = 0x0000000001d4643cUL;
   tf->codes[136] = 0x0000000001e64c81UL;
   tf->codes[137] = 0x0000000001466736UL;
   tf->codes[138] = 0x0000000000ac7a02UL;
   tf->codes[139] = 0x00000000016f2718UL;
   tf->codes[140] = 0x0000000001a056bdUL;
   tf->codes[141] = 0x00000000014d680cUL;
   tf->codes[142] = 0x0000000000ccca21UL;
   tf->codes[143] = 0x0000000000d04a8cUL;
   tf->codes[144] = 0x0000000001ee5616UL;
   tf->codes[145] = 0x0000000001dd7690UL;
   tf->codes[146] = 0x00000000015468e2UL;
   tf->codes[147] = 0x0000000000e82ae8UL;
   tf->codes[148] = 0x0000000001498173UL;
   tf->codes[149] = 0x0000000000f41b16UL;
   tf->codes[150] = 0x00000000019188b5UL;
   tf->codes[151] = 0x0000000001724155UL;
   tf->codes[152] = 0x0000000001bcc043UL;
   tf->codes[153] = 0x00000000010a8c85UL;
   tf->codes[154] = 0x00000000019f8a61UL;
   tf->codes[155] = 0x00000000005260b0UL;
   tf->codes[156] = 0x0000000001306e8dUL;
   tf->codes[157] = 0x00000000017aed7bUL;
   tf->codes[158] = 0x0000000001a62509UL;
   tf->codes[159] = 0x0000000001aaae33UL;
   tf->codes[160] = 0x00000000013bf88dUL;
   tf->codes[161] = 0x0000000001bb278bUL;
   tf->codes[162] = 0x00000000017c98cbUL;
   tf->codes[163] = 0x00000000001d86d5UL;
   tf->codes[164] = 0x00000000000ce3b2UL;
   tf->codes[165] = 0x0000000001e03d37UL;
   tf->codes[166] = 0x00000000004c1503UL;
   tf->codes[167] = 0x00000000019ed09dUL;
   tf->codes[168] = 0x0000000000a11532UL;
   tf->codes[169] = 0x00000000002edf21UL;
   tf->codes[170] = 0x00000000006d07b3UL;
   tf->codes[171] = 0x000000000127e797UL;
   tf->codes[172] = 0x000000000046fbe0UL;
   tf->codes[173] = 0x00000000001ccd11UL;
   tf->codes[174] = 0x0000000001e6ae14UL;
   tf->codes[175] = 0x0000000001897a85UL;
   tf->codes[176] = 0x000000000139e274UL;
   tf->codes[177] = 0x00000000014bcab9UL;
   tf->codes[178] = 0x000000000151ff33UL;
   tf->codes[179] = 0x000000000084a711UL;
   tf->codes[180] = 0x0000000001cc7b3cUL;
   tf->codes[181] = 0x0000000001565e92UL;
   tf->codes[182] = 0x000000000124c8bfUL;
   tf->codes[183] = 0x0000000000270d54UL;
   tf->codes[184] = 0x00000000000167afUL;
   tf->codes[185] = 0x000000000168bf9dUL;
   tf->codes[186] = 0x000000000156712aUL;
   tf->codes[187] = 0x0000000000e5803bUL;
   tf->codes[188] = 0x0000000000cea89eUL;
   tf->codes[189] = 0x0000000000f3e815UL;
   tf->codes[190] = 0x000000000170759cUL;
   tf->codes[191] = 0x0000000001bda899UL;
   tf->codes[192] = 0x0000000000335f15UL;
   tf->codes[193] = 0x0000000000ddc5a1UL;
   tf->codes[194] = 0x000000000136463bUL;
   tf->codes[195] = 0x00000000006c3221UL;
   tf->codes[196] = 0x0000000001333e96UL;
   tf->codes[197] = 0x000000000009bba4UL;
   tf->codes[198] = 0x00000000016cf096UL;
   tf->codes[199] = 0x0000000001404a1bUL;
   tf->codes[200] = 0x00000000018295a9UL;
   tf->codes[201] = 0x0000000001f2f69fUL;
   tf->codes[202] = 0x0000000001b5709eUL;
   tf->codes[203] = 0x0000000001054e5eUL;
   tf->codes[204] = 0x0000000000b96083UL;
   tf->codes[205] = 0x00000000015b93afUL;
   tf->codes[206] = 0x00000000017d8f1eUL;
   tf->codes[207] = 0x0000000001bdc92eUL;
   tf->codes[208] = 0x000000000045e0b5UL;
   tf->codes[209] = 0x000000000167a90dUL;
   tf->codes[210] = 0x0000000000142117UL;
   tf->codes[211] = 0x00000000018c1c28UL;
   tf->codes[212] = 0x0000000000a2fd11UL;
   tf->codes[213] = 0x0000000001fecaffUL;
   tf->codes[214] = 0x00000000013f9e54UL;
   tf->codes[215] = 0x0000000000c76b91UL;
   tf->codes[216] = 0x000000000188a9baUL;
   tf->codes[217] = 0x000000000105a6bbUL;
   tf->codes[218] = 0x0000000000f4c735UL;
   tf->codes[219] = 0x0000000000812237UL;
   tf->codes[220] = 0x0000000001fc9db3UL;
   tf->codes[221] = 0x000000000112dc0bUL;
   tf->codes[222] = 0x0000000001ce221dUL;
   tf->codes[223] = 0x0000000001cdce87UL;
   tf->codes[224] = 0x00000000008461a4UL;
   tf->codes[225] = 0x00000000013de533UL;
   tf->codes[226] = 0x0000000001b71c1aUL;
   tf->codes[227] = 0x0000000001bb4d13UL;
   tf->codes[228] = 0x00000000012860b5UL;
   tf->codes[229] = 0x0000000001a4960bUL;
   tf->codes[230] = 0x00000000019c62abUL;
   tf->codes[231] = 0x000000000003acb2UL;
   tf->codes[232] = 0x0000000001ac0b0cUL;
   tf->codes[233] = 0x00000000009a0248UL;
   tf->codes[234] = 0x00000000000d0e01UL;
   tf->codes[235] = 0x00000000014a3720UL;
   tf->codes[236] = 0x000000000193961cUL;
   tf->codes[237] = 0x000000000191c101UL;
   tf->codes[238] = 0x0000000000978166UL;
   tf->codes[239] = 0x0000000001eaf229UL;
   tf->codes[240] = 0x00000000007d6126UL;
   tf->codes[241] = 0x0000000000266211UL;
   tf->codes[242] = 0x00000000012f414eUL;
   tf->codes[243] = 0x00000000000efaa7UL;
   tf->codes[244] = 0x0000000001d55209UL;
   tf->codes[245] = 0x0000000001f1bb8fUL;
   tf->codes[246] = 0x000000000060ea27UL;
   tf->codes[247] = 0x0000000001f8cf29UL;
   tf->codes[248] = 0x00000000010fb012UL;
   tf->codes[249] = 0x0000000000da463eUL;
   tf->codes[250] = 0x00000000019f4135UL;
   tf->codes[251] = 0x00000000017b880aUL;
   tf->codes[252] = 0x00000000015bed14UL;
   tf->codes[253] = 0x0000000001d97ebfUL;
   tf->codes[254] = 0x0000000001347280UL;
   tf->codes[255] = 0x00000000013b2dbdUL;
   tf->codes[256] = 0x00000000010c0f96UL;
   tf->codes[257] = 0x0000000001d00695UL;
   tf->codes[258] = 0x0000000000be2c8fUL;
   tf->codes[259] = 0x0000000000542a0aUL;
   tf->codes[260] = 0x0000000000f1d40cUL;
   tf->codes[261] = 0x000000000193af07UL;
   tf->codes[262] = 0x0000000001a31fa0UL;
   tf->codes[263] = 0x0000000000378d83UL;
   tf->codes[264] = 0x000000000011da0dUL;
   tf->codes[265] = 0x0000000000b9ad1fUL;
   tf->codes[266] = 0x0000000001213389UL;
   tf->codes[267] = 0x00000000010ad4b2UL;
   tf->codes[268] = 0x0000000001a67b33UL;
   tf->codes[269] = 0x0000000001ace2daUL;
   tf->codes[270] = 0x0000000001fadd98UL;
   tf->codes[271] = 0x000000000144e402UL;
   tf->codes[272] = 0x00000000018b77bcUL;
   tf->codes[273] = 0x0000000001f4c0a9UL;
   tf->codes[274] = 0x0000000001e993a1UL;
   tf->codes[275] = 0x0000000000dda824UL;
   tf->codes[276] = 0x0000000001f3bcb1UL;
   tf->codes[277] = 0x00000000018e19b7UL;
   tf->codes[278] = 0x0000000000731137UL;
   tf->codes[279] = 0x000000000176c01eUL;
   tf->codes[280] = 0x00000000016f7e4aUL;
   tf->codes[281] = 0x0000000001f4b35cUL;
   tf->codes[282] = 0x00000000014080b8UL;
   tf->codes[283] = 0x0000000001fab501UL;
   tf->codes[284] = 0x0000000001ac90a4UL;
   tf->codes[285] = 0x0000000000c94005UL;
   tf->codes[286] = 0x000000000014e889UL;
   tf->codes[287] = 0x0000000001160891UL;
   tf->codes[288] = 0x0000000001379001UL;
   tf->codes[289] = 0x0000000001e54d2dUL;
   tf->codes[290] = 0x0000000001645711UL;
   tf->codes[291] = 0x00000000015601cfUL;
   tf->codes[292] = 0x0000000001d3f9a8UL;
   tf->codes[293] = 0x0000000000e3908fUL;
   tf->codes[294] = 0x00000000005c092dUL;
   tf->codes[295] = 0x0000000001ffd527UL;
   tf->codes[296] = 0x00000000018fbe91UL;
   tf->codes[297] = 0x000000000123f12fUL;
   tf->codes[298] = 0x00000000015d4f99UL;
   tf->codes[299] = 0x0000000001afeb38UL;
   tf->codes[300] = 0x0000000001a5f581UL;
   tf->codes[301] = 0x0000000000bbb235UL;
   tf->codes[302] = 0x00000000008f0bbaUL;
   tf->codes[303] = 0x0000000000c70e27UL;
   tf->codes[304] = 0x0000000000a2ea8bUL;
   tf->codes[305] = 0x00000000013d221fUL;
   tf->codes[306] = 0x0000000000614681UL;
   tf->codes[307] = 0x000000000063f2baUL;
   tf->codes[308] = 0x0000000001f72e29UL;
   tf->codes[309] = 0x0000000000f8cb92UL;
   tf->codes[310] = 0x0000000001c122a0UL;
   tf->codes[311] = 0x00000000004f26a9UL;
   tf->codes[312] = 0x00000000001a642dUL;
   tf->codes[313] = 0x0000000000f37a2cUL;
   tf->codes[314] = 0x0000000000d7ca96UL;
   tf->codes[315] = 0x00000000018fe4afUL;
   tf->codes[316] = 0x00000000005b0188UL;
   tf->codes[317] = 0x00000000015e1381UL;
   tf->codes[318] = 0x0000000000b14839UL;
   tf->codes[319] = 0x0000000000169ca6UL;
   tf->codes[320] = 0x0000000000edb8b2UL;
   tf->codes[321] = 0x000000000136a3afUL;
   tf->codes[322] = 0x00000000014cddaeUL;
   tf->codes[323] = 0x00000000015b741aUL;
   tf->codes[324] = 0x0000000001645a9cUL;
   tf->codes[325] = 0x00000000008ee90dUL;
   tf->codes[326] = 0x00000000019a162bUL;
   tf->codes[327] = 0x00000000010f8f2fUL;
   tf->codes[328] = 0x0000000001ff6a07UL;
   tf->codes[329] = 0x00000000003be7a1UL;
   tf->codes[330] = 0x00000000005ba69cUL;
   tf->codes[331] = 0x0000000001cf9c0bUL;
   tf->codes[332] = 0x00000000010df39dUL;
   tf->codes[333] = 0x000000000145ba83UL;
   tf->codes[334] = 0x000000000057bf04UL;
   tf->codes[335] = 0x0000000000ef8d99UL;
   tf->codes[336] = 0x000000000110c620UL;
   tf->codes[337] = 0x0000000001d0eb2eUL;
   tf->codes[338] = 0x0000000001a00023UL;
   tf->codes[339] = 0x00000000016e3e87UL;
   tf->codes[340] = 0x00000000018d051fUL;
   tf->codes[341] = 0x0000000001949130UL;
   tf->codes[342] = 0x0000000001cef7bbUL;
   tf->codes[343] = 0x0000000000d0e19dUL;
   tf->codes[344] = 0x0000000001945c17UL;
   tf->codes[345] = 0x0000000001dc0326UL;
   tf->codes[346] = 0x000000000196339aUL;
   tf->codes[347] = 0x0000000000c064bbUL;
   tf->codes[348] = 0x0000000000fd2701UL;
   tf->codes[349] = 0x0000000000380cbbUL;
   tf->codes[350] = 0x000000000187523aUL;
   tf->codes[351] = 0x0000000000acd498UL;
   tf->codes[352] = 0x0000000000aa633fUL;
   tf->codes[353] = 0x0000000001007fa1UL;
   tf->codes[354] = 0x0000000001e0e10bUL;
   tf->codes[355] = 0x0000000000591093UL;
   tf->codes[356] = 0x00000000009d808fUL;
   tf->codes[357] = 0x000000000008f614UL;
   tf->codes[358] = 0x0000000000208b9eUL;
   tf->codes[359] = 0x00000000011aef9fUL;
   tf->codes[360] = 0x0000000001096613UL;
   tf->nbits = 25;
   tf->bit_x = calloc(25, sizeof(uint32_t));
   tf->bit_y = calloc(25, sizeof(uint32_t));
   tf->bit_x[0] = -2;
   tf->bit_y[0] = -2;
   tf->bit_x[1] = -1;
   tf->bit_y[1] = -2;
   tf->bit_x[2] = 0;
   tf->bit_y[2] = -2;
   tf->bit_x[3] = 1;
   tf->bit_y[3] = -2;
   tf->bit_x[4] = 2;
   tf->bit_y[4] = -2;
   tf->bit_x[5] = 3;
   tf->bit_y[5] = -2;
   tf->bit_x[6] = 4;
   tf->bit_y[6] = -2;
   tf->bit_x[7] = 4;
   tf->bit_y[7] = -1;
   tf->bit_x[8] = 4;
   tf->bit_y[8] = 0;
   tf->bit_x[9] = 4;
   tf->bit_y[9] = 1;
   tf->bit_x[10] = 4;
   tf->bit_y[10] = 2;
   tf->bit_x[11] = 4;
   tf->bit_y[11] = 3;
   tf->bit_x[12] = 4;
   tf->bit_y[12] = 4;
   tf->bit_x[13] = 3;
   tf->bit_y[13] = 4;
   tf->bit_x[14] = 2;
   tf->bit_y[14] = 4;
   tf->bit_x[15] = 1;
   tf->bit_y[15] = 4;
   tf->bit_x[16] = 0;
   tf->bit_y[16] = 4;
   tf->bit_x[17] = -1;
   tf->bit_y[17] = 4;
   tf->bit_x[18] = -2;
   tf->bit_y[18] = 4;
   tf->bit_x[19] = -2;
   tf->bit_y[19] = 3;
   tf->bit_x[20] = -2;
   tf->bit_y[20] = 2;
   tf->bit_x[21] = -2;
   tf->bit_y[21] = 1;
   tf->bit_x[22] = -2;
   tf->bit_y[22] = 0;
   tf->bit_x[23] = -2;
   tf->bit_y[23] = -1;
   tf->bit_x[24] = 1;
   tf->bit_y[24] = 1;
   tf->width_at_border = 3;
   tf->total_width = 7;
   return tf;
}

void tagStandard25h7_destroy(apriltag_family_t *tf)
{
   free(tf->codes);
   free(tf->bit_x);
   free(tf->bit_y);
   free(tf);
}
