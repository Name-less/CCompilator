--------------------------------------------------------------------------------
-- Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: O.87xd
--  \   \         Application: netgen
--  /   /         Filename: DI_synthesis.vhd
-- /___/   /\     Timestamp: Mon May 11 11:28:38 2015
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -ar Structure -tm DI -w -dir netgen/synthesis -ofmt vhdl -sim DI.ngc DI_synthesis.vhd 
-- Device	: xc6slx16-3-csg324
-- Input file	: DI.ngc
-- Output file	: /home/laloy/CCompilator/VHDL/RISC_processor/netgen/synthesis/DI_synthesis.vhd
-- # of Entities	: 1
-- Design Name	: DI
-- Xilinx	: /usr/local/Xilinx134/13.4/ISE_DS/ISE/
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
use UNISIM.VPKG.ALL;

entity DI is
  port (
    W : in STD_LOGIC := 'X'; 
    RST : in STD_LOGIC := 'X'; 
    CLK : in STD_LOGIC := 'X'; 
    addra : in STD_LOGIC_VECTOR ( 3 downto 0 ); 
    addrb : in STD_LOGIC_VECTOR ( 3 downto 0 ); 
    addrw : in STD_LOGIC_VECTOR ( 3 downto 0 ); 
    DATA : in STD_LOGIC_VECTOR ( 7 downto 0 ); 
    QA : out STD_LOGIC_VECTOR ( 7 downto 0 ); 
    QB : out STD_LOGIC_VECTOR ( 7 downto 0 ) 
  );
end DI;

architecture Structure of DI is
  signal addra_3_IBUF_0 : STD_LOGIC; 
  signal addra_2_IBUF_1 : STD_LOGIC; 
  signal addra_1_IBUF_2 : STD_LOGIC; 
  signal addra_0_IBUF_3 : STD_LOGIC; 
  signal addrb_3_IBUF_4 : STD_LOGIC; 
  signal addrb_2_IBUF_5 : STD_LOGIC; 
  signal addrb_1_IBUF_6 : STD_LOGIC; 
  signal addrb_0_IBUF_7 : STD_LOGIC; 
  signal addrw_3_IBUF_8 : STD_LOGIC; 
  signal addrw_2_IBUF_9 : STD_LOGIC; 
  signal addrw_1_IBUF_10 : STD_LOGIC; 
  signal addrw_0_IBUF_11 : STD_LOGIC; 
  signal DATA_7_IBUF_12 : STD_LOGIC; 
  signal DATA_6_IBUF_13 : STD_LOGIC; 
  signal DATA_5_IBUF_14 : STD_LOGIC; 
  signal DATA_4_IBUF_15 : STD_LOGIC; 
  signal DATA_3_IBUF_16 : STD_LOGIC; 
  signal DATA_2_IBUF_17 : STD_LOGIC; 
  signal DATA_1_IBUF_18 : STD_LOGIC; 
  signal DATA_0_IBUF_19 : STD_LOGIC; 
  signal W_IBUF_20 : STD_LOGIC; 
  signal RST_IBUF_21 : STD_LOGIC; 
  signal CLK_BUFGP_22 : STD_LOGIC; 
  signal addrw_3_addra_3_equal_1_o : STD_LOGIC; 
  signal addrw_3_addrb_3_equal_2_o : STD_LOGIC; 
  signal addra_3_DATA_7_mux_88_OUT_7_Q : STD_LOGIC; 
  signal addra_3_DATA_7_mux_88_OUT_6_Q : STD_LOGIC; 
  signal addra_3_DATA_7_mux_88_OUT_5_Q : STD_LOGIC; 
  signal addra_3_DATA_7_mux_88_OUT_4_Q : STD_LOGIC; 
  signal addra_3_DATA_7_mux_88_OUT_3_Q : STD_LOGIC; 
  signal addra_3_DATA_7_mux_88_OUT_2_Q : STD_LOGIC; 
  signal addra_3_DATA_7_mux_88_OUT_1_Q : STD_LOGIC; 
  signal addra_3_DATA_7_mux_88_OUT_0_Q : STD_LOGIC; 
  signal addrb_3_DATA_7_mux_90_OUT_7_Q : STD_LOGIC; 
  signal addrb_3_DATA_7_mux_90_OUT_6_Q : STD_LOGIC; 
  signal addrb_3_DATA_7_mux_90_OUT_5_Q : STD_LOGIC; 
  signal addrb_3_DATA_7_mux_90_OUT_4_Q : STD_LOGIC; 
  signal addrb_3_DATA_7_mux_90_OUT_3_Q : STD_LOGIC; 
  signal addrb_3_DATA_7_mux_90_OUT_2_Q : STD_LOGIC; 
  signal addrb_3_DATA_7_mux_90_OUT_1_Q : STD_LOGIC; 
  signal addrb_3_DATA_7_mux_90_OUT_0_Q : STD_LOGIC; 
  signal RST_inv : STD_LOGIC; 
  signal Q_n0254_inv : STD_LOGIC; 
  signal Q_n0284_inv : STD_LOGIC; 
  signal Q_n0264_inv : STD_LOGIC; 
  signal Q_n0274_inv : STD_LOGIC; 
  signal Q_n0314_inv : STD_LOGIC; 
  signal Q_n0294_inv : STD_LOGIC; 
  signal Q_n0304_inv : STD_LOGIC; 
  signal Q_n0344_inv : STD_LOGIC; 
  signal Q_n0324_inv : STD_LOGIC; 
  signal Q_n0334_inv : STD_LOGIC; 
  signal Q_n0374_inv : STD_LOGIC; 
  signal Q_n0354_inv : STD_LOGIC; 
  signal Q_n0364_inv : STD_LOGIC; 
  signal Q_n0404_inv : STD_LOGIC; 
  signal Q_n0384_inv : STD_LOGIC; 
  signal Q_n0394_inv : STD_LOGIC; 
  signal Q_n0236_inv : STD_LOGIC; 
  signal Q_n0244_inv : STD_LOGIC; 
  signal mux_4_f7_204 : STD_LOGIC; 
  signal mux_6_205 : STD_LOGIC; 
  signal mux_51_206 : STD_LOGIC; 
  signal mux_3_f7_207 : STD_LOGIC; 
  signal mux_5_208 : STD_LOGIC; 
  signal mux_4_209 : STD_LOGIC; 
  signal mux3_4_f7_210 : STD_LOGIC; 
  signal mux3_6_211 : STD_LOGIC; 
  signal mux3_51_212 : STD_LOGIC; 
  signal mux3_3_f7_213 : STD_LOGIC; 
  signal mux3_5_214 : STD_LOGIC; 
  signal mux3_4_215 : STD_LOGIC; 
  signal mux1_4_f7_216 : STD_LOGIC; 
  signal mux1_6_217 : STD_LOGIC; 
  signal mux1_51_218 : STD_LOGIC; 
  signal mux1_3_f7_219 : STD_LOGIC; 
  signal mux1_5_220 : STD_LOGIC; 
  signal mux1_4_221 : STD_LOGIC; 
  signal mux2_4_f7_222 : STD_LOGIC; 
  signal mux2_6_223 : STD_LOGIC; 
  signal mux2_51_224 : STD_LOGIC; 
  signal mux2_3_f7_225 : STD_LOGIC; 
  signal mux2_5_226 : STD_LOGIC; 
  signal mux2_4_227 : STD_LOGIC; 
  signal mux4_4_f7_228 : STD_LOGIC; 
  signal mux4_6_229 : STD_LOGIC; 
  signal mux4_51_230 : STD_LOGIC; 
  signal mux4_3_f7_231 : STD_LOGIC; 
  signal mux4_5_232 : STD_LOGIC; 
  signal mux4_4_233 : STD_LOGIC; 
  signal mux5_4_f7_234 : STD_LOGIC; 
  signal mux5_6_235 : STD_LOGIC; 
  signal mux5_51_236 : STD_LOGIC; 
  signal mux5_3_f7_237 : STD_LOGIC; 
  signal mux5_5_238 : STD_LOGIC; 
  signal mux5_4_239 : STD_LOGIC; 
  signal mux8_4_f7_240 : STD_LOGIC; 
  signal mux8_6_241 : STD_LOGIC; 
  signal mux8_51_242 : STD_LOGIC; 
  signal mux8_3_f7_243 : STD_LOGIC; 
  signal mux8_5_244 : STD_LOGIC; 
  signal mux8_4_245 : STD_LOGIC; 
  signal mux6_4_f7_246 : STD_LOGIC; 
  signal mux6_6_247 : STD_LOGIC; 
  signal mux6_51_248 : STD_LOGIC; 
  signal mux6_3_f7_249 : STD_LOGIC; 
  signal mux6_5_250 : STD_LOGIC; 
  signal mux6_4_251 : STD_LOGIC; 
  signal mux7_4_f7_252 : STD_LOGIC; 
  signal mux7_6_253 : STD_LOGIC; 
  signal mux7_51_254 : STD_LOGIC; 
  signal mux7_3_f7_255 : STD_LOGIC; 
  signal mux7_5_256 : STD_LOGIC; 
  signal mux7_4_257 : STD_LOGIC; 
  signal mux9_4_f7_258 : STD_LOGIC; 
  signal mux9_6_259 : STD_LOGIC; 
  signal mux9_51_260 : STD_LOGIC; 
  signal mux9_3_f7_261 : STD_LOGIC; 
  signal mux9_5_262 : STD_LOGIC; 
  signal mux9_4_263 : STD_LOGIC; 
  signal mux10_4_f7_264 : STD_LOGIC; 
  signal mux10_6_265 : STD_LOGIC; 
  signal mux10_51_266 : STD_LOGIC; 
  signal mux10_3_f7_267 : STD_LOGIC; 
  signal mux10_5_268 : STD_LOGIC; 
  signal mux10_4_269 : STD_LOGIC; 
  signal mux13_4_f7_270 : STD_LOGIC; 
  signal mux13_6_271 : STD_LOGIC; 
  signal mux13_51_272 : STD_LOGIC; 
  signal mux13_3_f7_273 : STD_LOGIC; 
  signal mux13_5_274 : STD_LOGIC; 
  signal mux13_4_275 : STD_LOGIC; 
  signal mux11_4_f7_276 : STD_LOGIC; 
  signal mux11_6_277 : STD_LOGIC; 
  signal mux11_51_278 : STD_LOGIC; 
  signal mux11_3_f7_279 : STD_LOGIC; 
  signal mux11_5_280 : STD_LOGIC; 
  signal mux11_4_281 : STD_LOGIC; 
  signal mux12_4_f7_282 : STD_LOGIC; 
  signal mux12_6_283 : STD_LOGIC; 
  signal mux12_51_284 : STD_LOGIC; 
  signal mux12_3_f7_285 : STD_LOGIC; 
  signal mux12_5_286 : STD_LOGIC; 
  signal mux12_4_287 : STD_LOGIC; 
  signal mux14_4_f7_288 : STD_LOGIC; 
  signal mux14_6_289 : STD_LOGIC; 
  signal mux14_51_290 : STD_LOGIC; 
  signal mux14_3_f7_291 : STD_LOGIC; 
  signal mux14_5_292 : STD_LOGIC; 
  signal mux14_4_293 : STD_LOGIC; 
  signal mux15_4_f7_294 : STD_LOGIC; 
  signal mux15_6_295 : STD_LOGIC; 
  signal mux15_51_296 : STD_LOGIC; 
  signal mux15_3_f7_297 : STD_LOGIC; 
  signal mux15_5_298 : STD_LOGIC; 
  signal mux15_4_299 : STD_LOGIC; 
  signal Q_n0274_inv1 : STD_LOGIC; 
  signal Q_n0254_inv2 : STD_LOGIC; 
  signal Q_n0264_inv1 : STD_LOGIC; 
  signal Q_n0284_inv1 : STD_LOGIC; 
  signal N2 : STD_LOGIC; 
  signal N4 : STD_LOGIC; 
  signal bench_1 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_2 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_3 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_4 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_5 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_6 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_7 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_8 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_9 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_10 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_11 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_12 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_13 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_14 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_15 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal bench_0 : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal Sigouta : STD_LOGIC_VECTOR ( 7 downto 0 ); 
  signal Sigoutb : STD_LOGIC_VECTOR ( 7 downto 0 ); 
begin
  bench_1_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0254_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_1(0)
    );
  bench_1_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0254_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_1(1)
    );
  bench_1_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0254_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_1(2)
    );
  bench_1_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0254_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_1(3)
    );
  bench_1_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0254_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_1(4)
    );
  bench_1_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0254_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_1(5)
    );
  bench_1_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0254_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_1(6)
    );
  bench_1_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0254_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_1(7)
    );
  bench_4_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0284_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_4(0)
    );
  bench_4_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0284_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_4(1)
    );
  bench_4_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0284_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_4(2)
    );
  bench_4_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0284_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_4(3)
    );
  bench_4_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0284_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_4(4)
    );
  bench_4_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0284_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_4(5)
    );
  bench_4_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0284_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_4(6)
    );
  bench_4_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0284_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_4(7)
    );
  bench_2_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0264_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_2(0)
    );
  bench_2_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0264_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_2(1)
    );
  bench_2_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0264_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_2(2)
    );
  bench_2_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0264_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_2(3)
    );
  bench_2_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0264_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_2(4)
    );
  bench_2_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0264_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_2(5)
    );
  bench_2_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0264_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_2(6)
    );
  bench_2_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0264_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_2(7)
    );
  bench_3_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0274_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_3(0)
    );
  bench_3_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0274_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_3(1)
    );
  bench_3_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0274_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_3(2)
    );
  bench_3_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0274_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_3(3)
    );
  bench_3_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0274_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_3(4)
    );
  bench_3_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0274_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_3(5)
    );
  bench_3_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0274_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_3(6)
    );
  bench_3_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0274_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_3(7)
    );
  bench_7_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0314_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_7(0)
    );
  bench_7_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0314_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_7(1)
    );
  bench_7_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0314_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_7(2)
    );
  bench_7_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0314_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_7(3)
    );
  bench_7_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0314_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_7(4)
    );
  bench_7_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0314_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_7(5)
    );
  bench_7_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0314_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_7(6)
    );
  bench_7_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0314_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_7(7)
    );
  bench_5_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0294_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_5(0)
    );
  bench_5_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0294_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_5(1)
    );
  bench_5_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0294_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_5(2)
    );
  bench_5_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0294_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_5(3)
    );
  bench_5_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0294_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_5(4)
    );
  bench_5_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0294_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_5(5)
    );
  bench_5_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0294_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_5(6)
    );
  bench_5_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0294_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_5(7)
    );
  bench_6_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0304_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_6(0)
    );
  bench_6_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0304_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_6(1)
    );
  bench_6_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0304_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_6(2)
    );
  bench_6_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0304_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_6(3)
    );
  bench_6_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0304_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_6(4)
    );
  bench_6_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0304_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_6(5)
    );
  bench_6_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0304_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_6(6)
    );
  bench_6_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0304_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_6(7)
    );
  bench_10_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0344_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_10(0)
    );
  bench_10_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0344_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_10(1)
    );
  bench_10_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0344_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_10(2)
    );
  bench_10_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0344_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_10(3)
    );
  bench_10_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0344_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_10(4)
    );
  bench_10_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0344_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_10(5)
    );
  bench_10_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0344_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_10(6)
    );
  bench_10_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0344_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_10(7)
    );
  bench_8_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0324_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_8(0)
    );
  bench_8_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0324_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_8(1)
    );
  bench_8_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0324_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_8(2)
    );
  bench_8_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0324_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_8(3)
    );
  bench_8_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0324_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_8(4)
    );
  bench_8_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0324_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_8(5)
    );
  bench_8_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0324_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_8(6)
    );
  bench_8_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0324_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_8(7)
    );
  bench_9_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0334_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_9(0)
    );
  bench_9_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0334_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_9(1)
    );
  bench_9_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0334_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_9(2)
    );
  bench_9_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0334_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_9(3)
    );
  bench_9_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0334_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_9(4)
    );
  bench_9_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0334_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_9(5)
    );
  bench_9_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0334_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_9(6)
    );
  bench_9_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0334_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_9(7)
    );
  bench_13_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0374_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_13(0)
    );
  bench_13_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0374_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_13(1)
    );
  bench_13_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0374_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_13(2)
    );
  bench_13_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0374_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_13(3)
    );
  bench_13_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0374_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_13(4)
    );
  bench_13_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0374_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_13(5)
    );
  bench_13_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0374_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_13(6)
    );
  bench_13_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0374_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_13(7)
    );
  bench_11_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0354_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_11(0)
    );
  bench_11_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0354_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_11(1)
    );
  bench_11_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0354_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_11(2)
    );
  bench_11_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0354_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_11(3)
    );
  bench_11_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0354_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_11(4)
    );
  bench_11_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0354_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_11(5)
    );
  bench_11_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0354_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_11(6)
    );
  bench_11_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0354_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_11(7)
    );
  bench_12_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0364_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_12(0)
    );
  bench_12_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0364_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_12(1)
    );
  bench_12_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0364_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_12(2)
    );
  bench_12_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0364_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_12(3)
    );
  bench_12_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0364_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_12(4)
    );
  bench_12_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0364_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_12(5)
    );
  bench_12_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0364_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_12(6)
    );
  bench_12_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0364_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_12(7)
    );
  bench_0_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0404_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_0(0)
    );
  bench_0_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0404_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_0(1)
    );
  bench_0_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0404_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_0(2)
    );
  bench_0_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0404_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_0(3)
    );
  bench_0_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0404_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_0(4)
    );
  bench_0_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0404_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_0(5)
    );
  bench_0_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0404_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_0(6)
    );
  bench_0_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0404_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_0(7)
    );
  bench_14_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0384_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_14(0)
    );
  bench_14_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0384_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_14(1)
    );
  bench_14_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0384_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_14(2)
    );
  bench_14_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0384_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_14(3)
    );
  bench_14_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0384_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_14(4)
    );
  bench_14_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0384_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_14(5)
    );
  bench_14_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0384_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_14(6)
    );
  bench_14_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0384_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_14(7)
    );
  bench_15_0 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0394_inv,
      D => DATA_0_IBUF_19,
      R => RST_inv,
      Q => bench_15(0)
    );
  bench_15_1 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0394_inv,
      D => DATA_1_IBUF_18,
      R => RST_inv,
      Q => bench_15(1)
    );
  bench_15_2 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0394_inv,
      D => DATA_2_IBUF_17,
      R => RST_inv,
      Q => bench_15(2)
    );
  bench_15_3 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0394_inv,
      D => DATA_3_IBUF_16,
      R => RST_inv,
      Q => bench_15(3)
    );
  bench_15_4 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0394_inv,
      D => DATA_4_IBUF_15,
      R => RST_inv,
      Q => bench_15(4)
    );
  bench_15_5 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0394_inv,
      D => DATA_5_IBUF_14,
      R => RST_inv,
      Q => bench_15(5)
    );
  bench_15_6 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0394_inv,
      D => DATA_6_IBUF_13,
      R => RST_inv,
      Q => bench_15(6)
    );
  bench_15_7 : FDRE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0394_inv,
      D => DATA_7_IBUF_12,
      R => RST_inv,
      Q => bench_15(7)
    );
  Sigouta_0 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0236_inv,
      D => addra_3_DATA_7_mux_88_OUT_0_Q,
      Q => Sigouta(0)
    );
  Sigouta_1 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0236_inv,
      D => addra_3_DATA_7_mux_88_OUT_1_Q,
      Q => Sigouta(1)
    );
  Sigouta_2 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0236_inv,
      D => addra_3_DATA_7_mux_88_OUT_2_Q,
      Q => Sigouta(2)
    );
  Sigouta_3 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0236_inv,
      D => addra_3_DATA_7_mux_88_OUT_3_Q,
      Q => Sigouta(3)
    );
  Sigouta_4 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0236_inv,
      D => addra_3_DATA_7_mux_88_OUT_4_Q,
      Q => Sigouta(4)
    );
  Sigouta_5 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0236_inv,
      D => addra_3_DATA_7_mux_88_OUT_5_Q,
      Q => Sigouta(5)
    );
  Sigouta_6 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0236_inv,
      D => addra_3_DATA_7_mux_88_OUT_6_Q,
      Q => Sigouta(6)
    );
  Sigouta_7 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0236_inv,
      D => addra_3_DATA_7_mux_88_OUT_7_Q,
      Q => Sigouta(7)
    );
  Sigoutb_0 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0244_inv,
      D => addrb_3_DATA_7_mux_90_OUT_0_Q,
      Q => Sigoutb(0)
    );
  Sigoutb_1 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0244_inv,
      D => addrb_3_DATA_7_mux_90_OUT_1_Q,
      Q => Sigoutb(1)
    );
  Sigoutb_2 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0244_inv,
      D => addrb_3_DATA_7_mux_90_OUT_2_Q,
      Q => Sigoutb(2)
    );
  Sigoutb_3 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0244_inv,
      D => addrb_3_DATA_7_mux_90_OUT_3_Q,
      Q => Sigoutb(3)
    );
  Sigoutb_4 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0244_inv,
      D => addrb_3_DATA_7_mux_90_OUT_4_Q,
      Q => Sigoutb(4)
    );
  Sigoutb_5 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0244_inv,
      D => addrb_3_DATA_7_mux_90_OUT_5_Q,
      Q => Sigoutb(5)
    );
  Sigoutb_6 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0244_inv,
      D => addrb_3_DATA_7_mux_90_OUT_6_Q,
      Q => Sigoutb(6)
    );
  Sigoutb_7 : FDE
    port map (
      C => CLK_BUFGP_22,
      CE => Q_n0244_inv,
      D => addrb_3_DATA_7_mux_90_OUT_7_Q,
      Q => Sigoutb(7)
    );
  mux_4_f7 : MUXF7
    port map (
      I0 => mux_6_205,
      I1 => mux_51_206,
      S => addra_2_IBUF_1,
      O => mux_4_f7_204
    );
  mux_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_2(0),
      I3 => bench_3(0),
      I4 => bench_1(0),
      I5 => bench_0(0),
      O => mux_6_205
    );
  mux_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_6(0),
      I3 => bench_7(0),
      I4 => bench_5(0),
      I5 => bench_4(0),
      O => mux_51_206
    );
  mux_3_f7 : MUXF7
    port map (
      I0 => mux_5_208,
      I1 => mux_4_209,
      S => addra_2_IBUF_1,
      O => mux_3_f7_207
    );
  mux_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_10(0),
      I3 => bench_11(0),
      I4 => bench_9(0),
      I5 => bench_8(0),
      O => mux_5_208
    );
  mux_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_14(0),
      I3 => bench_15(0),
      I4 => bench_13(0),
      I5 => bench_12(0),
      O => mux_4_209
    );
  mux3_4_f7 : MUXF7
    port map (
      I0 => mux3_6_211,
      I1 => mux3_51_212,
      S => addra_2_IBUF_1,
      O => mux3_4_f7_210
    );
  mux3_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_2(3),
      I3 => bench_3(3),
      I4 => bench_1(3),
      I5 => bench_0(3),
      O => mux3_6_211
    );
  mux3_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_6(3),
      I3 => bench_7(3),
      I4 => bench_5(3),
      I5 => bench_4(3),
      O => mux3_51_212
    );
  mux3_3_f7 : MUXF7
    port map (
      I0 => mux3_5_214,
      I1 => mux3_4_215,
      S => addra_2_IBUF_1,
      O => mux3_3_f7_213
    );
  mux3_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_10(3),
      I3 => bench_11(3),
      I4 => bench_9(3),
      I5 => bench_8(3),
      O => mux3_5_214
    );
  mux3_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_14(3),
      I3 => bench_15(3),
      I4 => bench_13(3),
      I5 => bench_12(3),
      O => mux3_4_215
    );
  mux1_4_f7 : MUXF7
    port map (
      I0 => mux1_6_217,
      I1 => mux1_51_218,
      S => addra_2_IBUF_1,
      O => mux1_4_f7_216
    );
  mux1_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_2(1),
      I3 => bench_3(1),
      I4 => bench_1(1),
      I5 => bench_0(1),
      O => mux1_6_217
    );
  mux1_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_6(1),
      I3 => bench_7(1),
      I4 => bench_5(1),
      I5 => bench_4(1),
      O => mux1_51_218
    );
  mux1_3_f7 : MUXF7
    port map (
      I0 => mux1_5_220,
      I1 => mux1_4_221,
      S => addra_2_IBUF_1,
      O => mux1_3_f7_219
    );
  mux1_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_10(1),
      I3 => bench_11(1),
      I4 => bench_9(1),
      I5 => bench_8(1),
      O => mux1_5_220
    );
  mux1_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_14(1),
      I3 => bench_15(1),
      I4 => bench_13(1),
      I5 => bench_12(1),
      O => mux1_4_221
    );
  mux2_4_f7 : MUXF7
    port map (
      I0 => mux2_6_223,
      I1 => mux2_51_224,
      S => addra_2_IBUF_1,
      O => mux2_4_f7_222
    );
  mux2_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_2(2),
      I3 => bench_3(2),
      I4 => bench_1(2),
      I5 => bench_0(2),
      O => mux2_6_223
    );
  mux2_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_6(2),
      I3 => bench_7(2),
      I4 => bench_5(2),
      I5 => bench_4(2),
      O => mux2_51_224
    );
  mux2_3_f7 : MUXF7
    port map (
      I0 => mux2_5_226,
      I1 => mux2_4_227,
      S => addra_2_IBUF_1,
      O => mux2_3_f7_225
    );
  mux2_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_10(2),
      I3 => bench_11(2),
      I4 => bench_9(2),
      I5 => bench_8(2),
      O => mux2_5_226
    );
  mux2_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_14(2),
      I3 => bench_15(2),
      I4 => bench_13(2),
      I5 => bench_12(2),
      O => mux2_4_227
    );
  mux4_4_f7 : MUXF7
    port map (
      I0 => mux4_6_229,
      I1 => mux4_51_230,
      S => addra_2_IBUF_1,
      O => mux4_4_f7_228
    );
  mux4_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_2(4),
      I3 => bench_3(4),
      I4 => bench_1(4),
      I5 => bench_0(4),
      O => mux4_6_229
    );
  mux4_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_6(4),
      I3 => bench_7(4),
      I4 => bench_5(4),
      I5 => bench_4(4),
      O => mux4_51_230
    );
  mux4_3_f7 : MUXF7
    port map (
      I0 => mux4_5_232,
      I1 => mux4_4_233,
      S => addra_2_IBUF_1,
      O => mux4_3_f7_231
    );
  mux4_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_10(4),
      I3 => bench_11(4),
      I4 => bench_9(4),
      I5 => bench_8(4),
      O => mux4_5_232
    );
  mux4_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_14(4),
      I3 => bench_15(4),
      I4 => bench_13(4),
      I5 => bench_12(4),
      O => mux4_4_233
    );
  mux5_4_f7 : MUXF7
    port map (
      I0 => mux5_6_235,
      I1 => mux5_51_236,
      S => addra_2_IBUF_1,
      O => mux5_4_f7_234
    );
  mux5_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_2(5),
      I3 => bench_3(5),
      I4 => bench_1(5),
      I5 => bench_0(5),
      O => mux5_6_235
    );
  mux5_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_6(5),
      I3 => bench_7(5),
      I4 => bench_5(5),
      I5 => bench_4(5),
      O => mux5_51_236
    );
  mux5_3_f7 : MUXF7
    port map (
      I0 => mux5_5_238,
      I1 => mux5_4_239,
      S => addra_2_IBUF_1,
      O => mux5_3_f7_237
    );
  mux5_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_10(5),
      I3 => bench_11(5),
      I4 => bench_9(5),
      I5 => bench_8(5),
      O => mux5_5_238
    );
  mux5_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_14(5),
      I3 => bench_15(5),
      I4 => bench_13(5),
      I5 => bench_12(5),
      O => mux5_4_239
    );
  mux8_4_f7 : MUXF7
    port map (
      I0 => mux8_6_241,
      I1 => mux8_51_242,
      S => addrb_2_IBUF_5,
      O => mux8_4_f7_240
    );
  mux8_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_2(0),
      I3 => bench_3(0),
      I4 => bench_1(0),
      I5 => bench_0(0),
      O => mux8_6_241
    );
  mux8_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_6(0),
      I3 => bench_7(0),
      I4 => bench_5(0),
      I5 => bench_4(0),
      O => mux8_51_242
    );
  mux8_3_f7 : MUXF7
    port map (
      I0 => mux8_5_244,
      I1 => mux8_4_245,
      S => addrb_2_IBUF_5,
      O => mux8_3_f7_243
    );
  mux8_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_10(0),
      I3 => bench_11(0),
      I4 => bench_9(0),
      I5 => bench_8(0),
      O => mux8_5_244
    );
  mux8_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_14(0),
      I3 => bench_15(0),
      I4 => bench_13(0),
      I5 => bench_12(0),
      O => mux8_4_245
    );
  mux6_4_f7 : MUXF7
    port map (
      I0 => mux6_6_247,
      I1 => mux6_51_248,
      S => addra_2_IBUF_1,
      O => mux6_4_f7_246
    );
  mux6_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_2(6),
      I3 => bench_3(6),
      I4 => bench_1(6),
      I5 => bench_0(6),
      O => mux6_6_247
    );
  mux6_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_6(6),
      I3 => bench_7(6),
      I4 => bench_5(6),
      I5 => bench_4(6),
      O => mux6_51_248
    );
  mux6_3_f7 : MUXF7
    port map (
      I0 => mux6_5_250,
      I1 => mux6_4_251,
      S => addra_2_IBUF_1,
      O => mux6_3_f7_249
    );
  mux6_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_10(6),
      I3 => bench_11(6),
      I4 => bench_9(6),
      I5 => bench_8(6),
      O => mux6_5_250
    );
  mux6_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_14(6),
      I3 => bench_15(6),
      I4 => bench_13(6),
      I5 => bench_12(6),
      O => mux6_4_251
    );
  mux7_4_f7 : MUXF7
    port map (
      I0 => mux7_6_253,
      I1 => mux7_51_254,
      S => addra_2_IBUF_1,
      O => mux7_4_f7_252
    );
  mux7_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_2(7),
      I3 => bench_3(7),
      I4 => bench_1(7),
      I5 => bench_0(7),
      O => mux7_6_253
    );
  mux7_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_6(7),
      I3 => bench_7(7),
      I4 => bench_5(7),
      I5 => bench_4(7),
      O => mux7_51_254
    );
  mux7_3_f7 : MUXF7
    port map (
      I0 => mux7_5_256,
      I1 => mux7_4_257,
      S => addra_2_IBUF_1,
      O => mux7_3_f7_255
    );
  mux7_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_10(7),
      I3 => bench_11(7),
      I4 => bench_9(7),
      I5 => bench_8(7),
      O => mux7_5_256
    );
  mux7_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addra_1_IBUF_2,
      I1 => addra_0_IBUF_3,
      I2 => bench_14(7),
      I3 => bench_15(7),
      I4 => bench_13(7),
      I5 => bench_12(7),
      O => mux7_4_257
    );
  mux9_4_f7 : MUXF7
    port map (
      I0 => mux9_6_259,
      I1 => mux9_51_260,
      S => addrb_2_IBUF_5,
      O => mux9_4_f7_258
    );
  mux9_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_2(1),
      I3 => bench_3(1),
      I4 => bench_1(1),
      I5 => bench_0(1),
      O => mux9_6_259
    );
  mux9_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_6(1),
      I3 => bench_7(1),
      I4 => bench_5(1),
      I5 => bench_4(1),
      O => mux9_51_260
    );
  mux9_3_f7 : MUXF7
    port map (
      I0 => mux9_5_262,
      I1 => mux9_4_263,
      S => addrb_2_IBUF_5,
      O => mux9_3_f7_261
    );
  mux9_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_10(1),
      I3 => bench_11(1),
      I4 => bench_9(1),
      I5 => bench_8(1),
      O => mux9_5_262
    );
  mux9_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_14(1),
      I3 => bench_15(1),
      I4 => bench_13(1),
      I5 => bench_12(1),
      O => mux9_4_263
    );
  mux10_4_f7 : MUXF7
    port map (
      I0 => mux10_6_265,
      I1 => mux10_51_266,
      S => addrb_2_IBUF_5,
      O => mux10_4_f7_264
    );
  mux10_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_2(2),
      I3 => bench_3(2),
      I4 => bench_1(2),
      I5 => bench_0(2),
      O => mux10_6_265
    );
  mux10_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_6(2),
      I3 => bench_7(2),
      I4 => bench_5(2),
      I5 => bench_4(2),
      O => mux10_51_266
    );
  mux10_3_f7 : MUXF7
    port map (
      I0 => mux10_5_268,
      I1 => mux10_4_269,
      S => addrb_2_IBUF_5,
      O => mux10_3_f7_267
    );
  mux10_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_10(2),
      I3 => bench_11(2),
      I4 => bench_9(2),
      I5 => bench_8(2),
      O => mux10_5_268
    );
  mux10_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_14(2),
      I3 => bench_15(2),
      I4 => bench_13(2),
      I5 => bench_12(2),
      O => mux10_4_269
    );
  mux13_4_f7 : MUXF7
    port map (
      I0 => mux13_6_271,
      I1 => mux13_51_272,
      S => addrb_2_IBUF_5,
      O => mux13_4_f7_270
    );
  mux13_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_2(5),
      I3 => bench_3(5),
      I4 => bench_1(5),
      I5 => bench_0(5),
      O => mux13_6_271
    );
  mux13_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_6(5),
      I3 => bench_7(5),
      I4 => bench_5(5),
      I5 => bench_4(5),
      O => mux13_51_272
    );
  mux13_3_f7 : MUXF7
    port map (
      I0 => mux13_5_274,
      I1 => mux13_4_275,
      S => addrb_2_IBUF_5,
      O => mux13_3_f7_273
    );
  mux13_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_10(5),
      I3 => bench_11(5),
      I4 => bench_9(5),
      I5 => bench_8(5),
      O => mux13_5_274
    );
  mux13_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_14(5),
      I3 => bench_15(5),
      I4 => bench_13(5),
      I5 => bench_12(5),
      O => mux13_4_275
    );
  mux11_4_f7 : MUXF7
    port map (
      I0 => mux11_6_277,
      I1 => mux11_51_278,
      S => addrb_2_IBUF_5,
      O => mux11_4_f7_276
    );
  mux11_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_2(3),
      I3 => bench_3(3),
      I4 => bench_1(3),
      I5 => bench_0(3),
      O => mux11_6_277
    );
  mux11_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_6(3),
      I3 => bench_7(3),
      I4 => bench_5(3),
      I5 => bench_4(3),
      O => mux11_51_278
    );
  mux11_3_f7 : MUXF7
    port map (
      I0 => mux11_5_280,
      I1 => mux11_4_281,
      S => addrb_2_IBUF_5,
      O => mux11_3_f7_279
    );
  mux11_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_10(3),
      I3 => bench_11(3),
      I4 => bench_9(3),
      I5 => bench_8(3),
      O => mux11_5_280
    );
  mux11_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_14(3),
      I3 => bench_15(3),
      I4 => bench_13(3),
      I5 => bench_12(3),
      O => mux11_4_281
    );
  mux12_4_f7 : MUXF7
    port map (
      I0 => mux12_6_283,
      I1 => mux12_51_284,
      S => addrb_2_IBUF_5,
      O => mux12_4_f7_282
    );
  mux12_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_2(4),
      I3 => bench_3(4),
      I4 => bench_1(4),
      I5 => bench_0(4),
      O => mux12_6_283
    );
  mux12_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_6(4),
      I3 => bench_7(4),
      I4 => bench_5(4),
      I5 => bench_4(4),
      O => mux12_51_284
    );
  mux12_3_f7 : MUXF7
    port map (
      I0 => mux12_5_286,
      I1 => mux12_4_287,
      S => addrb_2_IBUF_5,
      O => mux12_3_f7_285
    );
  mux12_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_10(4),
      I3 => bench_11(4),
      I4 => bench_9(4),
      I5 => bench_8(4),
      O => mux12_5_286
    );
  mux12_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_14(4),
      I3 => bench_15(4),
      I4 => bench_13(4),
      I5 => bench_12(4),
      O => mux12_4_287
    );
  mux14_4_f7 : MUXF7
    port map (
      I0 => mux14_6_289,
      I1 => mux14_51_290,
      S => addrb_2_IBUF_5,
      O => mux14_4_f7_288
    );
  mux14_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_2(6),
      I3 => bench_3(6),
      I4 => bench_1(6),
      I5 => bench_0(6),
      O => mux14_6_289
    );
  mux14_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_6(6),
      I3 => bench_7(6),
      I4 => bench_5(6),
      I5 => bench_4(6),
      O => mux14_51_290
    );
  mux14_3_f7 : MUXF7
    port map (
      I0 => mux14_5_292,
      I1 => mux14_4_293,
      S => addrb_2_IBUF_5,
      O => mux14_3_f7_291
    );
  mux14_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_10(6),
      I3 => bench_11(6),
      I4 => bench_9(6),
      I5 => bench_8(6),
      O => mux14_5_292
    );
  mux14_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_14(6),
      I3 => bench_15(6),
      I4 => bench_13(6),
      I5 => bench_12(6),
      O => mux14_4_293
    );
  mux15_4_f7 : MUXF7
    port map (
      I0 => mux15_6_295,
      I1 => mux15_51_296,
      S => addrb_2_IBUF_5,
      O => mux15_4_f7_294
    );
  mux15_6 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_2(7),
      I3 => bench_3(7),
      I4 => bench_1(7),
      I5 => bench_0(7),
      O => mux15_6_295
    );
  mux15_51 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_6(7),
      I3 => bench_7(7),
      I4 => bench_5(7),
      I5 => bench_4(7),
      O => mux15_51_296
    );
  mux15_3_f7 : MUXF7
    port map (
      I0 => mux15_5_298,
      I1 => mux15_4_299,
      S => addrb_2_IBUF_5,
      O => mux15_3_f7_297
    );
  mux15_5 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_10(7),
      I3 => bench_11(7),
      I4 => bench_9(7),
      I5 => bench_8(7),
      O => mux15_5_298
    );
  mux15_4 : LUT6
    generic map(
      INIT => X"FD75B931EC64A820"
    )
    port map (
      I0 => addrb_1_IBUF_6,
      I1 => addrb_0_IBUF_7,
      I2 => bench_14(7),
      I3 => bench_15(7),
      I4 => bench_13(7),
      I5 => bench_12(7),
      O => mux15_4_299
    );
  Q_n0274_inv2 : LUT3
    generic map(
      INIT => X"10"
    )
    port map (
      I0 => addrw_2_IBUF_9,
      I1 => addrw_3_IBUF_8,
      I2 => Q_n0274_inv1,
      O => Q_n0274_inv
    );
  Q_n0314_inv1 : LUT3
    generic map(
      INIT => X"20"
    )
    port map (
      I0 => addrw_2_IBUF_9,
      I1 => addrw_3_IBUF_8,
      I2 => Q_n0274_inv1,
      O => Q_n0314_inv
    );
  Q_n0354_inv1 : LUT3
    generic map(
      INIT => X"20"
    )
    port map (
      I0 => addrw_3_IBUF_8,
      I1 => addrw_2_IBUF_9,
      I2 => Q_n0274_inv1,
      O => Q_n0354_inv
    );
  Q_n0394_inv1 : LUT3
    generic map(
      INIT => X"80"
    )
    port map (
      I0 => addrw_2_IBUF_9,
      I1 => addrw_3_IBUF_8,
      I2 => Q_n0274_inv1,
      O => Q_n0394_inv
    );
  Q_n0254_inv1 : LUT3
    generic map(
      INIT => X"10"
    )
    port map (
      I0 => addrw_2_IBUF_9,
      I1 => addrw_3_IBUF_8,
      I2 => Q_n0254_inv2,
      O => Q_n0254_inv
    );
  Q_n0294_inv1 : LUT3
    generic map(
      INIT => X"20"
    )
    port map (
      I0 => addrw_2_IBUF_9,
      I1 => addrw_3_IBUF_8,
      I2 => Q_n0254_inv2,
      O => Q_n0294_inv
    );
  Q_n0334_inv1 : LUT3
    generic map(
      INIT => X"20"
    )
    port map (
      I0 => addrw_3_IBUF_8,
      I1 => addrw_2_IBUF_9,
      I2 => Q_n0254_inv2,
      O => Q_n0334_inv
    );
  Q_n0374_inv1 : LUT3
    generic map(
      INIT => X"80"
    )
    port map (
      I0 => addrw_2_IBUF_9,
      I1 => addrw_3_IBUF_8,
      I2 => Q_n0254_inv2,
      O => Q_n0374_inv
    );
  Q_n0264_inv2 : LUT3
    generic map(
      INIT => X"10"
    )
    port map (
      I0 => addrw_2_IBUF_9,
      I1 => addrw_3_IBUF_8,
      I2 => Q_n0264_inv1,
      O => Q_n0264_inv
    );
  Q_n0304_inv1 : LUT3
    generic map(
      INIT => X"20"
    )
    port map (
      I0 => addrw_2_IBUF_9,
      I1 => addrw_3_IBUF_8,
      I2 => Q_n0264_inv1,
      O => Q_n0304_inv
    );
  Q_n0344_inv1 : LUT3
    generic map(
      INIT => X"20"
    )
    port map (
      I0 => addrw_3_IBUF_8,
      I1 => addrw_2_IBUF_9,
      I2 => Q_n0264_inv1,
      O => Q_n0344_inv
    );
  Q_n0384_inv1 : LUT3
    generic map(
      INIT => X"80"
    )
    port map (
      I0 => addrw_2_IBUF_9,
      I1 => addrw_3_IBUF_8,
      I2 => Q_n0264_inv1,
      O => Q_n0384_inv
    );
  Q_n0284_inv2 : LUT3
    generic map(
      INIT => X"20"
    )
    port map (
      I0 => addrw_2_IBUF_9,
      I1 => addrw_3_IBUF_8,
      I2 => Q_n0284_inv1,
      O => Q_n0284_inv
    );
  Q_n0324_inv1 : LUT3
    generic map(
      INIT => X"20"
    )
    port map (
      I0 => addrw_3_IBUF_8,
      I1 => addrw_2_IBUF_9,
      I2 => Q_n0284_inv1,
      O => Q_n0324_inv
    );
  Q_n0364_inv1 : LUT3
    generic map(
      INIT => X"80"
    )
    port map (
      I0 => addrw_2_IBUF_9,
      I1 => addrw_3_IBUF_8,
      I2 => Q_n0284_inv1,
      O => Q_n0364_inv
    );
  Q_n0404_inv1 : LUT3
    generic map(
      INIT => X"10"
    )
    port map (
      I0 => addrw_2_IBUF_9,
      I1 => addrw_3_IBUF_8,
      I2 => Q_n0284_inv1,
      O => Q_n0404_inv
    );
  Q_n0244_inv1 : LUT4
    generic map(
      INIT => X"4404"
    )
    port map (
      I0 => addrw_3_addra_3_equal_1_o,
      I1 => RST_IBUF_21,
      I2 => W_IBUF_20,
      I3 => addrw_3_addrb_3_equal_2_o,
      O => Q_n0244_inv
    );
  Q_n0236_inv1 : LUT4
    generic map(
      INIT => X"AA02"
    )
    port map (
      I0 => RST_IBUF_21,
      I1 => addrw_3_addrb_3_equal_2_o,
      I2 => W_IBUF_20,
      I3 => addrw_3_addra_3_equal_1_o,
      O => Q_n0236_inv
    );
  Q_n0274_inv11 : LUT5
    generic map(
      INIT => X"00080000"
    )
    port map (
      I0 => addrw_0_IBUF_11,
      I1 => addrw_1_IBUF_10,
      I2 => addrw_3_addra_3_equal_1_o,
      I3 => addrw_3_addrb_3_equal_2_o,
      I4 => W_IBUF_20,
      O => Q_n0274_inv1
    );
  Q_n0254_inv21 : LUT5
    generic map(
      INIT => X"00020000"
    )
    port map (
      I0 => addrw_0_IBUF_11,
      I1 => addrw_1_IBUF_10,
      I2 => addrw_3_addra_3_equal_1_o,
      I3 => addrw_3_addrb_3_equal_2_o,
      I4 => W_IBUF_20,
      O => Q_n0254_inv2
    );
  Q_n0264_inv11 : LUT5
    generic map(
      INIT => X"00020000"
    )
    port map (
      I0 => addrw_1_IBUF_10,
      I1 => addrw_0_IBUF_11,
      I2 => addrw_3_addra_3_equal_1_o,
      I3 => addrw_3_addrb_3_equal_2_o,
      I4 => W_IBUF_20,
      O => Q_n0264_inv1
    );
  Q_n0284_inv11 : LUT5
    generic map(
      INIT => X"00010000"
    )
    port map (
      I0 => addrw_0_IBUF_11,
      I1 => addrw_1_IBUF_10,
      I2 => addrw_3_addra_3_equal_1_o,
      I3 => addrw_3_addrb_3_equal_2_o,
      I4 => W_IBUF_20,
      O => Q_n0284_inv1
    );
  addrw_3_addra_3_equal_1_o4_SW0 : LUT4
    generic map(
      INIT => X"6FF6"
    )
    port map (
      I0 => addra_0_IBUF_3,
      I1 => addrw_0_IBUF_11,
      I2 => addra_1_IBUF_2,
      I3 => addrw_1_IBUF_10,
      O => N2
    );
  addrw_3_addra_3_equal_1_o4 : LUT5
    generic map(
      INIT => X"41000041"
    )
    port map (
      I0 => N2,
      I1 => addrw_2_IBUF_9,
      I2 => addra_2_IBUF_1,
      I3 => addra_3_IBUF_0,
      I4 => addrw_3_IBUF_8,
      O => addrw_3_addra_3_equal_1_o
    );
  addrw_3_addrb_3_equal_2_o4_SW0 : LUT4
    generic map(
      INIT => X"6FF6"
    )
    port map (
      I0 => addrb_0_IBUF_7,
      I1 => addrw_0_IBUF_11,
      I2 => addrb_1_IBUF_6,
      I3 => addrw_1_IBUF_10,
      O => N4
    );
  addrw_3_addrb_3_equal_2_o4 : LUT5
    generic map(
      INIT => X"41000041"
    )
    port map (
      I0 => N4,
      I1 => addrw_2_IBUF_9,
      I2 => addrb_2_IBUF_5,
      I3 => addrb_3_IBUF_4,
      I4 => addrw_3_IBUF_8,
      O => addrw_3_addrb_3_equal_2_o
    );
  addra_3_IBUF : IBUF
    port map (
      I => addra(3),
      O => addra_3_IBUF_0
    );
  addra_2_IBUF : IBUF
    port map (
      I => addra(2),
      O => addra_2_IBUF_1
    );
  addra_1_IBUF : IBUF
    port map (
      I => addra(1),
      O => addra_1_IBUF_2
    );
  addra_0_IBUF : IBUF
    port map (
      I => addra(0),
      O => addra_0_IBUF_3
    );
  addrb_3_IBUF : IBUF
    port map (
      I => addrb(3),
      O => addrb_3_IBUF_4
    );
  addrb_2_IBUF : IBUF
    port map (
      I => addrb(2),
      O => addrb_2_IBUF_5
    );
  addrb_1_IBUF : IBUF
    port map (
      I => addrb(1),
      O => addrb_1_IBUF_6
    );
  addrb_0_IBUF : IBUF
    port map (
      I => addrb(0),
      O => addrb_0_IBUF_7
    );
  addrw_3_IBUF : IBUF
    port map (
      I => addrw(3),
      O => addrw_3_IBUF_8
    );
  addrw_2_IBUF : IBUF
    port map (
      I => addrw(2),
      O => addrw_2_IBUF_9
    );
  addrw_1_IBUF : IBUF
    port map (
      I => addrw(1),
      O => addrw_1_IBUF_10
    );
  addrw_0_IBUF : IBUF
    port map (
      I => addrw(0),
      O => addrw_0_IBUF_11
    );
  DATA_7_IBUF : IBUF
    port map (
      I => DATA(7),
      O => DATA_7_IBUF_12
    );
  DATA_6_IBUF : IBUF
    port map (
      I => DATA(6),
      O => DATA_6_IBUF_13
    );
  DATA_5_IBUF : IBUF
    port map (
      I => DATA(5),
      O => DATA_5_IBUF_14
    );
  DATA_4_IBUF : IBUF
    port map (
      I => DATA(4),
      O => DATA_4_IBUF_15
    );
  DATA_3_IBUF : IBUF
    port map (
      I => DATA(3),
      O => DATA_3_IBUF_16
    );
  DATA_2_IBUF : IBUF
    port map (
      I => DATA(2),
      O => DATA_2_IBUF_17
    );
  DATA_1_IBUF : IBUF
    port map (
      I => DATA(1),
      O => DATA_1_IBUF_18
    );
  DATA_0_IBUF : IBUF
    port map (
      I => DATA(0),
      O => DATA_0_IBUF_19
    );
  W_IBUF : IBUF
    port map (
      I => W,
      O => W_IBUF_20
    );
  RST_IBUF : IBUF
    port map (
      I => RST,
      O => RST_IBUF_21
    );
  QA_7_OBUF : OBUF
    port map (
      I => Sigouta(7),
      O => QA(7)
    );
  QA_6_OBUF : OBUF
    port map (
      I => Sigouta(6),
      O => QA(6)
    );
  QA_5_OBUF : OBUF
    port map (
      I => Sigouta(5),
      O => QA(5)
    );
  QA_4_OBUF : OBUF
    port map (
      I => Sigouta(4),
      O => QA(4)
    );
  QA_3_OBUF : OBUF
    port map (
      I => Sigouta(3),
      O => QA(3)
    );
  QA_2_OBUF : OBUF
    port map (
      I => Sigouta(2),
      O => QA(2)
    );
  QA_1_OBUF : OBUF
    port map (
      I => Sigouta(1),
      O => QA(1)
    );
  QA_0_OBUF : OBUF
    port map (
      I => Sigouta(0),
      O => QA(0)
    );
  QB_7_OBUF : OBUF
    port map (
      I => Sigoutb(7),
      O => QB(7)
    );
  QB_6_OBUF : OBUF
    port map (
      I => Sigoutb(6),
      O => QB(6)
    );
  QB_5_OBUF : OBUF
    port map (
      I => Sigoutb(5),
      O => QB(5)
    );
  QB_4_OBUF : OBUF
    port map (
      I => Sigoutb(4),
      O => QB(4)
    );
  QB_3_OBUF : OBUF
    port map (
      I => Sigoutb(3),
      O => QB(3)
    );
  QB_2_OBUF : OBUF
    port map (
      I => Sigoutb(2),
      O => QB(2)
    );
  QB_1_OBUF : OBUF
    port map (
      I => Sigoutb(1),
      O => QB(1)
    );
  QB_0_OBUF : OBUF
    port map (
      I => Sigoutb(0),
      O => QB(0)
    );
  Mmux_addra_3_DATA_7_mux_88_OUT81 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_7_IBUF_12,
      I1 => addra_3_IBUF_0,
      I2 => addrw_3_addra_3_equal_1_o,
      I3 => mux7_4_f7_252,
      I4 => mux7_3_f7_255,
      O => addra_3_DATA_7_mux_88_OUT_7_Q
    );
  Mmux_addra_3_DATA_7_mux_88_OUT71 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_6_IBUF_13,
      I1 => addra_3_IBUF_0,
      I2 => addrw_3_addra_3_equal_1_o,
      I3 => mux6_4_f7_246,
      I4 => mux6_3_f7_249,
      O => addra_3_DATA_7_mux_88_OUT_6_Q
    );
  Mmux_addra_3_DATA_7_mux_88_OUT61 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_5_IBUF_14,
      I1 => addra_3_IBUF_0,
      I2 => addrw_3_addra_3_equal_1_o,
      I3 => mux5_4_f7_234,
      I4 => mux5_3_f7_237,
      O => addra_3_DATA_7_mux_88_OUT_5_Q
    );
  Mmux_addra_3_DATA_7_mux_88_OUT51 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_4_IBUF_15,
      I1 => addra_3_IBUF_0,
      I2 => addrw_3_addra_3_equal_1_o,
      I3 => mux4_4_f7_228,
      I4 => mux4_3_f7_231,
      O => addra_3_DATA_7_mux_88_OUT_4_Q
    );
  Mmux_addra_3_DATA_7_mux_88_OUT41 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_3_IBUF_16,
      I1 => addra_3_IBUF_0,
      I2 => addrw_3_addra_3_equal_1_o,
      I3 => mux3_4_f7_210,
      I4 => mux3_3_f7_213,
      O => addra_3_DATA_7_mux_88_OUT_3_Q
    );
  Mmux_addra_3_DATA_7_mux_88_OUT31 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_2_IBUF_17,
      I1 => addra_3_IBUF_0,
      I2 => addrw_3_addra_3_equal_1_o,
      I3 => mux2_4_f7_222,
      I4 => mux2_3_f7_225,
      O => addra_3_DATA_7_mux_88_OUT_2_Q
    );
  Mmux_addra_3_DATA_7_mux_88_OUT21 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_1_IBUF_18,
      I1 => addra_3_IBUF_0,
      I2 => addrw_3_addra_3_equal_1_o,
      I3 => mux1_4_f7_216,
      I4 => mux1_3_f7_219,
      O => addra_3_DATA_7_mux_88_OUT_1_Q
    );
  Mmux_addra_3_DATA_7_mux_88_OUT11 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_0_IBUF_19,
      I1 => addra_3_IBUF_0,
      I2 => addrw_3_addra_3_equal_1_o,
      I3 => mux_4_f7_204,
      I4 => mux_3_f7_207,
      O => addra_3_DATA_7_mux_88_OUT_0_Q
    );
  Mmux_addrb_3_DATA_7_mux_90_OUT81 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_7_IBUF_12,
      I1 => addrb_3_IBUF_4,
      I2 => addrw_3_addrb_3_equal_2_o,
      I3 => mux15_4_f7_294,
      I4 => mux15_3_f7_297,
      O => addrb_3_DATA_7_mux_90_OUT_7_Q
    );
  Mmux_addrb_3_DATA_7_mux_90_OUT71 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_6_IBUF_13,
      I1 => addrb_3_IBUF_4,
      I2 => addrw_3_addrb_3_equal_2_o,
      I3 => mux14_4_f7_288,
      I4 => mux14_3_f7_291,
      O => addrb_3_DATA_7_mux_90_OUT_6_Q
    );
  Mmux_addrb_3_DATA_7_mux_90_OUT61 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_5_IBUF_14,
      I1 => addrb_3_IBUF_4,
      I2 => addrw_3_addrb_3_equal_2_o,
      I3 => mux13_4_f7_270,
      I4 => mux13_3_f7_273,
      O => addrb_3_DATA_7_mux_90_OUT_5_Q
    );
  Mmux_addrb_3_DATA_7_mux_90_OUT51 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_4_IBUF_15,
      I1 => addrb_3_IBUF_4,
      I2 => addrw_3_addrb_3_equal_2_o,
      I3 => mux12_4_f7_282,
      I4 => mux12_3_f7_285,
      O => addrb_3_DATA_7_mux_90_OUT_4_Q
    );
  Mmux_addrb_3_DATA_7_mux_90_OUT41 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_3_IBUF_16,
      I1 => addrb_3_IBUF_4,
      I2 => addrw_3_addrb_3_equal_2_o,
      I3 => mux11_4_f7_276,
      I4 => mux11_3_f7_279,
      O => addrb_3_DATA_7_mux_90_OUT_3_Q
    );
  Mmux_addrb_3_DATA_7_mux_90_OUT31 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_2_IBUF_17,
      I1 => addrb_3_IBUF_4,
      I2 => addrw_3_addrb_3_equal_2_o,
      I3 => mux10_4_f7_264,
      I4 => mux10_3_f7_267,
      O => addrb_3_DATA_7_mux_90_OUT_2_Q
    );
  Mmux_addrb_3_DATA_7_mux_90_OUT21 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_1_IBUF_18,
      I1 => addrb_3_IBUF_4,
      I2 => addrw_3_addrb_3_equal_2_o,
      I3 => mux9_4_f7_258,
      I4 => mux9_3_f7_261,
      O => addrb_3_DATA_7_mux_90_OUT_1_Q
    );
  Mmux_addrb_3_DATA_7_mux_90_OUT11 : LUT5
    generic map(
      INIT => X"AFACA3A0"
    )
    port map (
      I0 => DATA_0_IBUF_19,
      I1 => addrb_3_IBUF_4,
      I2 => addrw_3_addrb_3_equal_2_o,
      I3 => mux8_4_f7_240,
      I4 => mux8_3_f7_243,
      O => addrb_3_DATA_7_mux_90_OUT_0_Q
    );
  CLK_BUFGP : BUFGP
    port map (
      I => CLK,
      O => CLK_BUFGP_22
    );
  RST_inv1_INV_0 : INV
    port map (
      I => RST_IBUF_21,
      O => RST_inv
    );

end Structure;

