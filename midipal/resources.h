// Copyright 2011 Olivier Gillet.
//
// Author: Olivier Gillet (ol.gillet@gmail.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources


#ifndef MIDIPAL_RESOURCES_H_
#define MIDIPAL_RESOURCES_H_


#include "avrlib/base.h"

#include <avr/pgmspace.h>


#include "avrlib/resources_manager.h"

namespace midipal {

typedef uint8_t ResourceId;

extern const prog_char* string_table[];

extern const prog_uint16_t* lookup_table_table[];

extern const prog_uint8_t* character_table[];

extern const prog_uint8_t* waveform_table[];

extern const prog_uint16_t lut_res_arpeggiator_patterns[] PROGMEM;
extern const prog_uint16_t lut_res_drum_patterns[] PROGMEM;
extern const prog_uint16_t lut_res_groove_swing[] PROGMEM;
extern const prog_uint16_t lut_res_groove_shuffle[] PROGMEM;
extern const prog_uint16_t lut_res_groove_push[] PROGMEM;
extern const prog_uint16_t lut_res_groove_lag[] PROGMEM;
extern const prog_uint16_t lut_res_groove_human[] PROGMEM;
extern const prog_uint16_t lut_res_groove_monkey[] PROGMEM;
extern const prog_uint16_t lut_res_euclidian_patterns[] PROGMEM;
extern const prog_uint16_t lut_res_scale_0[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1[] PROGMEM;
extern const prog_uint16_t lut_res_scale_2[] PROGMEM;
extern const prog_uint16_t lut_res_scale_3[] PROGMEM;
extern const prog_uint16_t lut_res_scale_4[] PROGMEM;
extern const prog_uint16_t lut_res_scale_5[] PROGMEM;
extern const prog_uint16_t lut_res_scale_6[] PROGMEM;
extern const prog_uint16_t lut_res_scale_7[] PROGMEM;
extern const prog_uint16_t lut_res_scale_8[] PROGMEM;
extern const prog_uint16_t lut_res_scale_9[] PROGMEM;
extern const prog_uint16_t lut_res_scale_10[] PROGMEM;
extern const prog_uint16_t lut_res_scale_11[] PROGMEM;
extern const prog_uint16_t lut_res_scale_12[] PROGMEM;
extern const prog_uint16_t lut_res_scale_13[] PROGMEM;
extern const prog_uint16_t lut_res_scale_14[] PROGMEM;
extern const prog_uint16_t lut_res_scale_15[] PROGMEM;
extern const prog_uint16_t lut_res_scale_16[] PROGMEM;
extern const prog_uint16_t lut_res_scale_18[] PROGMEM;
extern const prog_uint16_t lut_res_scale_19[] PROGMEM;
extern const prog_uint16_t lut_res_scale_20[] PROGMEM;
extern const prog_uint16_t lut_res_scale_21[] PROGMEM;
extern const prog_uint16_t lut_res_scale_22[] PROGMEM;
extern const prog_uint16_t lut_res_scale_23[] PROGMEM;
extern const prog_uint16_t lut_res_scale_24[] PROGMEM;
extern const prog_uint16_t lut_res_increments[] PROGMEM;
extern const prog_uint8_t chr_res_digits_10[] PROGMEM;
extern const prog_uint8_t chr_res_sequencer_icons[] PROGMEM;
extern const prog_uint8_t wav_res_lfo_waveforms[] PROGMEM;
#define STR_RES_SYNCLTCH 0  // syncltch
#define STR_RES_POLYSEQ 1  // polyseq
#define STR_RES_ARPEGGIO 2  // arpeggio
#define STR_RES_BPM_CNTR 3  // bpm cntr
#define STR_RES_CC_KNOB 4  // cc knob
#define STR_RES_CHORDMEM 5  // chordmem
#define STR_RES_CLOCK 6  // clock
#define STR_RES_DIVIDER 7  // divider
#define STR_RES_CHNFILTR 8  // chnfiltr
#define STR_RES_CHNMERGR 9  // chnmergr
#define STR_RES_USER_PRG 10  // user prg
#define STR_RES_DISPATCH 11  // dispatch
#define STR_RES_DRUMS 12  // drums
#define STR_RES_MONITOR 13  // monitor
#define STR_RES_RANDOMIZ 14  // randomiz
#define STR_RES_CONTRLLR 15  // contrllr
#define STR_RES_SPLITTER 16  // splitter
#define STR_RES_DELAY 17  // delay
#define STR_RES_SCALE 18  // scale
#define STR_RES_SEQUENCR 19  // sequencr
#define STR_RES_CC_LFO 20  // cc lfo
#define STR_RES_TANPURA 21  // tanpura
#define STR_RES_SETTINGS 22  // settings
#define STR_RES_NOTENUKE 23  // notenuke
#define STR_RES_SYSXDUMP 24  // sysxdump
#define STR_RES__RESET_ 25  // !reset!
#define STR_RES___V1_3__ 26  // � v1.3 �
#define STR_RES_SNDOFF 27  // sndOff
#define STR_RES_RSTCTR 28  // rstCtr
#define STR_RES_LCLCTR 29  // lclCtr
#define STR_RES_NOTOFF 30  // notOff
#define STR_RES_OMNOFF 31  // omnOff
#define STR_RES_OMNION 32  // omniOn
#define STR_RES_MONOON 33  // monoOn
#define STR_RES_POLYON 34  // polyOn
#define STR_RES_SYSX__ 35  // sysx..
#define STR_RES__SYSX_ 36  // .sysx.
#define STR_RES___SYSX 37  // ..sysx
#define STR_RES_START 38  // start
#define STR_RES_STOP 39  // stop
#define STR_RES_CONT_ 40  // cont.
#define STR_RES_RESET 41  // reset
#define STR_RES_CHN 42  // chn
#define STR_RES_CCC 43  // ccc
#define STR_RES_CLC 44  // clc
#define STR_RES_CLR 45  // clr
#define STR_RES_ALL 46  // all
#define STR_RES_REST 47  // rest
#define STR_RES_TIE 48  // tie
#define STR_RES_EXIT 49  // exit
#define STR_RES_OFF 50  // off
#define STR_RES_ON 51  // on
#define STR_RES_NO 52  // no
#define STR_RES_YES 53  // yes
#define STR_RES_XFE 54  // xFE
#define STR_RES_LET 55  // let
#define STR_RES_FLT 56  // flt
#define STR_RES_HLD 57  // hld
#define STR_RES__5S 58  // .5s
#define STR_RES__1S 59  // 1s
#define STR_RES__2S 60  // 2s
#define STR_RES_REC 61  // rec
#define STR_RES_DUB 62  // dub
#define STR_RES__TIE 63  // tie
#define STR_RES_RUN 64  // run
#define STR_RES_BPM 65  // bpm
#define STR_RES_GRV 66  // grv
#define STR_RES_AMT 67  // amt
#define STR_RES_TAP 68  // tap
#define STR_RES_SWG 69  // swg
#define STR_RES_SHF 70  // shf
#define STR_RES_PSH 71  // psh
#define STR_RES_LAG 72  // lag
#define STR_RES_HUM 73  // hum
#define STR_RES_MNK 74  // mnk
#define STR_RES_VAL 75  // val
#define STR_RES_NUM 76  // num
#define STR_RES_TYP 77  // typ
#define STR_RES_CC_ 78  // cc#
#define STR_RES_NRP 79  // nrp
#define STR_RES_MIN 80  // min
#define STR_RES_MAX 81  // max
#define STR_RES_MOD 82  // mod
#define STR_RES_PTN 83  // ptn
#define STR_RES_LEN 84  // len
#define STR_RES_EUC 85  // euc
#define STR_RES_INT 86  // int
#define STR_RES_EXT 87  // ext
#define STR_RES_CLK 88  // clk
#define STR_RES_PT1 89  // pt1
#define STR_RES_PT2 90  // pt2
#define STR_RES_PT3 91  // pt3
#define STR_RES_PT4 92  // pt4
#define STR_RES_CC1 93  // cc1
#define STR_RES_CC2 94  // cc2
#define STR_RES_CC3 95  // cc3
#define STR_RES_CC4 96  // cc4
#define STR_RES_CC5 97  // cc5
#define STR_RES_CC6 98  // cc6
#define STR_RES_CC7 99  // cc7
#define STR_RES_CC8 100  // cc8
#define STR_RES_INP 101  // inp
#define STR_RES_OUT 102  // out
#define STR_RES_SPL 103  // spl
#define STR_RES_LOW 104  // low
#define STR_RES_UPP 105  // upp
#define STR_RES__AMT 106  // amt
#define STR_RES_NOT 107  // not
#define STR_RES_VEL 108  // vel
#define STR_RES__C1 109  // #c1
#define STR_RES__C2 110  // #c2
#define STR_RES_CYC 111  // cyc
#define STR_RES_POL 112  // pol
#define STR_RES_RND 113  // rnd
#define STR_RES_STK 114  // stk
#define STR_RES__VEL 115  // vel
#define STR_RES_DIR 116  // dir
#define STR_RES_UP 117  // up
#define STR_RES_DWN 118  // dwn
#define STR_RES_U_D 119  // u&d
#define STR_RES__RND 120  // rnd
#define STR_RES_OCT 121  // oct
#define STR_RES_DUR 122  // dur
#define STR_RES_LAT 123  // lat
#define STR_RES_DIV 124  // div
#define STR_RES_DEN 125  // den
#define STR_RES_4_1 126  // 4/1
#define STR_RES_3_1 127  // 3/1
#define STR_RES_2_1 128  // 2/1
#define STR_RES_3_2 129  // 3/2
#define STR_RES_1_1 130  // 1/1
#define STR_RES_3_4 131  // 3/4
#define STR_RES_2_3 132  // 2/3
#define STR_RES_1_2 133  // 1/2
#define STR_RES_3_8 134  // 3/8
#define STR_RES_1_3 135  // 1/3
#define STR_RES_1_4 136  // 1/4
#define STR_RES_1_6 137  // 1/6
#define STR_RES_1_8 138  // 1/8
#define STR_RES__12 139  // /12
#define STR_RES__16 140  // /16
#define STR_RES__24 141  // /24
#define STR_RES__32 142  // /32
#define STR_RES__48 143  // /48
#define STR_RES__96 144  // /96
#define STR_RES_REP 145  // rep
#define STR_RES_TRS 146  // trs
#define STR_RES_DPL 147  // dpl
#define STR_RES_OFF_ 148  // off_
#define STR_RES_MIR 149  // mir
#define STR_RES_ALT 150  // alt
#define STR_RES_TRK 151  // trk
#define STR_RES___RND 152  // rnd
#define STR_RES_ROO 153  // roo
#define STR_RES_SCL 154  // scl
#define STR_RES_VOI 155  // voi
#define STR_RES_HRM 156  // hrm
#define STR_RES_CHR 157  // chr
#define STR_RES_ION 158  // ion
#define STR_RES_DOR 159  // dor
#define STR_RES_PHR 160  // phr
#define STR_RES_LYD 161  // lyd
#define STR_RES_MIX 162  // mix
#define STR_RES_AEO 163  // aeo
#define STR_RES_LOC 164  // loc
#define STR_RES_BMJ 165  // bmj
#define STR_RES_BMN 166  // bmn
#define STR_RES_PMJ 167  // pmj
#define STR_RES_PMN 168  // pmn
#define STR_RES_BHR 169  // bhr
#define STR_RES_SHR 170  // shr
#define STR_RES_RUP 171  // rup
#define STR_RES_TOD 172  // tod
#define STR_RES_RAG 173  // rag
#define STR_RES_KAA 174  // kaa
#define STR_RES_MEG 175  // meg
#define STR_RES_MLK 176  // mlk
#define STR_RES_DPK 177  // dpk
#define STR_RES_FLK 178  // flk
#define STR_RES_JAP 179  // jap
#define STR_RES_GAM 180  // gam
#define STR_RES_WHL 181  // whl
#define STR_RES_KEY 182  // key
#define STR_RES__ 183  // 
#define STR_RES_STP 184  // stp
#define STR_RES_1 185  // 
#define STR_RES_2 186  // 
#define STR_RES_3 187  // 
#define STR_RES_4 188  // 
#define STR_RES_AM1 189  // am1
#define STR_RES_AM2 190  // am2
#define STR_RES_AM3 191  // am3
#define STR_RES_AM4 192  // am4
#define STR_RES_CE1 193  // ce1
#define STR_RES_CE2 194  // ce2
#define STR_RES_CE3 195  // ce3
#define STR_RES_CE4 196  // ce4
#define STR_RES_WF1 197  // wf1
#define STR_RES_WF2 198  // wf2
#define STR_RES_WF3 199  // wf3
#define STR_RES_WF4 200  // wf4
#define STR_RES_RT1 201  // rt1
#define STR_RES_RT2 202  // rt2
#define STR_RES_RT3 203  // rt3
#define STR_RES_RT4 204  // rt4
#define STR_RES_SY1 205  // sy1
#define STR_RES_SY2 206  // sy2
#define STR_RES_SY3 207  // sy3
#define STR_RES_SY4 208  // sy4
#define STR_RES_TRI 209  // tri
#define STR_RES_SQR 210  // sqr
#define STR_RES_RMP 211  // rmp
#define STR_RES_SIN 212  // sin
#define STR_RES_SI2 213  // si2
#define STR_RES_SI3 214  // si3
#define STR_RES_SI5 215  // si5
#define STR_RES_GG1 216  // gg1
#define STR_RES_GG2 217  // gg2
#define STR_RES_BT1 218  // bt1
#define STR_RES_BT2 219  // bt2
#define STR_RES_SP1 220  // sp1
#define STR_RES_SP2 221  // sp2
#define STR_RES_LP1 222  // lp1
#define STR_RES_LP2 223  // lp2
#define STR_RES_RS1 224  // rs1
#define STR_RES_RS2 225  // rs2
#define STR_RES_S_H 226  // s&h
#define STR_RES_PA 227  // pa
#define STR_RES_MA 228  // ma
#define STR_RES_NI 229  // ni
#define STR_RES_SA 230  // sa
#define STR_RES_RES 231  // res
#define STR_RES_FRE 232  // fre
#define STR_RES__NOT 233  // not
#define STR_RES_CHD 234  // chd
#define STR_RES_PRG 235  // prg
#define LUT_RES_ARPEGGIATOR_PATTERNS 0
#define LUT_RES_ARPEGGIATOR_PATTERNS_SIZE 22
#define LUT_RES_DRUM_PATTERNS 1
#define LUT_RES_DRUM_PATTERNS_SIZE 48
#define LUT_RES_GROOVE_SWING 2
#define LUT_RES_GROOVE_SWING_SIZE 16
#define LUT_RES_GROOVE_SHUFFLE 3
#define LUT_RES_GROOVE_SHUFFLE_SIZE 16
#define LUT_RES_GROOVE_PUSH 4
#define LUT_RES_GROOVE_PUSH_SIZE 16
#define LUT_RES_GROOVE_LAG 5
#define LUT_RES_GROOVE_LAG_SIZE 16
#define LUT_RES_GROOVE_HUMAN 6
#define LUT_RES_GROOVE_HUMAN_SIZE 16
#define LUT_RES_GROOVE_MONKEY 7
#define LUT_RES_GROOVE_MONKEY_SIZE 16
#define LUT_RES_EUCLIDIAN_PATTERNS 8
#define LUT_RES_EUCLIDIAN_PATTERNS_SIZE 144
#define LUT_RES_SCALE_0 9
#define LUT_RES_SCALE_0_SIZE 12
#define LUT_RES_SCALE_1 10
#define LUT_RES_SCALE_1_SIZE 12
#define LUT_RES_SCALE_2 11
#define LUT_RES_SCALE_2_SIZE 12
#define LUT_RES_SCALE_3 12
#define LUT_RES_SCALE_3_SIZE 12
#define LUT_RES_SCALE_4 13
#define LUT_RES_SCALE_4_SIZE 12
#define LUT_RES_SCALE_5 14
#define LUT_RES_SCALE_5_SIZE 12
#define LUT_RES_SCALE_6 15
#define LUT_RES_SCALE_6_SIZE 12
#define LUT_RES_SCALE_7 16
#define LUT_RES_SCALE_7_SIZE 12
#define LUT_RES_SCALE_8 17
#define LUT_RES_SCALE_8_SIZE 12
#define LUT_RES_SCALE_9 18
#define LUT_RES_SCALE_9_SIZE 12
#define LUT_RES_SCALE_10 19
#define LUT_RES_SCALE_10_SIZE 12
#define LUT_RES_SCALE_11 20
#define LUT_RES_SCALE_11_SIZE 12
#define LUT_RES_SCALE_12 21
#define LUT_RES_SCALE_12_SIZE 12
#define LUT_RES_SCALE_13 22
#define LUT_RES_SCALE_13_SIZE 12
#define LUT_RES_SCALE_14 23
#define LUT_RES_SCALE_14_SIZE 12
#define LUT_RES_SCALE_15 24
#define LUT_RES_SCALE_15_SIZE 12
#define LUT_RES_SCALE_16 25
#define LUT_RES_SCALE_16_SIZE 12
#define LUT_RES_SCALE_17 26
#define LUT_RES_SCALE_17_SIZE 12
#define LUT_RES_SCALE_18 27
#define LUT_RES_SCALE_18_SIZE 12
#define LUT_RES_SCALE_19 28
#define LUT_RES_SCALE_19_SIZE 12
#define LUT_RES_SCALE_20 29
#define LUT_RES_SCALE_20_SIZE 12
#define LUT_RES_SCALE_21 30
#define LUT_RES_SCALE_21_SIZE 12
#define LUT_RES_SCALE_22 31
#define LUT_RES_SCALE_22_SIZE 12
#define LUT_RES_SCALE_23 32
#define LUT_RES_SCALE_23_SIZE 12
#define LUT_RES_SCALE_24 33
#define LUT_RES_SCALE_24_SIZE 12
#define LUT_RES_INCREMENTS 34
#define LUT_RES_INCREMENTS_SIZE 19
#define CHR_RES_DIGITS_10 0
#define CHR_RES_DIGITS_10_SIZE 56
#define CHR_RES_SEQUENCER_ICONS 1
#define CHR_RES_SEQUENCER_ICONS_SIZE 32
#define WAV_RES_LFO_WAVEFORMS 0
#define WAV_RES_LFO_WAVEFORMS_SIZE 2193
typedef avrlib::ResourcesManager<
    ResourceId,
    avrlib::ResourcesTables<
        string_table,
        lookup_table_table> > ResourcesManager; 

}  // namespace midipal

#endif  // MIDIPAL_RESOURCES_H_
