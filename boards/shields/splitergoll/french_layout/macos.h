#pragma once

#include "../function.h"
#include "windows.h"

// Modifiers
#define M_CTL  LCTRL
#define M_OPN  LALT
#define M_CMD  LGUI

// Punctuation
#define M_EXCL  N8              // !
#define M_BSLASH  LS(RA(DOT))   // backslash

// Dead accents
#define    M_AGU    LS(RA(N1))   // ´ (dead)
#define    M_GRV    BSLH         // ` (dead)
#define    M_CIR    LBKT         // ^ (dead)
#define    M_TRE    LBRC         // ¨ (dead)
#define    M_TLD    RA(_N)       // ~ (dead)

// Letters with accents
MACRO(m_agu, &kp BSLH       &kp LS(_A)) // À
MACRO(m_eau, &kp LS(RA(N1)) &kp LS(_E)) // É
#define      M_CCU          RA(N9)      // Ç
#define      M_MU           RA(_M)      // µ
#define      M_OE           RA(_O)      // œ
#define      M_OEU          LS(RA(_O))  // Œ

// Brackets
#define    M_RACC    RA(MINUS)       // }
#define    M_LACC    RA(N5)          // {
#define    M_LCRO    LS(RA(N5))      // [
#define    M_RCRO    LS(RA(MINUS))   // ]
#define    M_LCHE    GRAVE           // <
#define    M_RCHE    LS(GRAVE)       // >
#define    M_AT      NUBS            // @
#define    M_PIPE    LS(RA(_L))      // |
#define    M_HASH    LS(NUBS)        // #
#define    M_EURO    RA(RBKT)        // €
#define    M_DOLR    RBKT            // $
#define    M_PND     LS(BSLH)        // £

// Quotes
MACRO(m_grv, &kp BSLH &kp SPACE)     // `

// Calculus
#define M_EQAL     SLASH          // =
#define M_PLUS     LS(SLASH)      // +
#define M_MINS     EQUAL          // -
#define M_UDSC     LS(EQUAL)      // _

// Moves
#define M_HOME     LG(LEFT)      // home
#define M_END      LG(RIGHT)     // end
#define M_LWRD     RA(LEFT)      // left word
#define M_RWRD     RA(RIGHT)     // right word
#define M_LDSK     LC(LEFT)      // left desktop
#define M_RDSK     LC(RIGHT)     // right desktop

// Coding arrows
MACRO(m_arw_s, &kp M_MINS &kp M_RCHE) // ->
MACRO(m_arw_d, &kp M_EQAL &kp M_RCHE) // =>
