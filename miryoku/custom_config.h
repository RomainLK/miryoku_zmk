// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku



#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define MIRYOKU_CLIPBOARD_WIN


#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_NUM, RET),  U_LT(U_SYM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP


#define MIRYOKU_LAYER_NAV \
U_NA,              U_NA,              &kp LC(S),         &kp F5,            &kp F12,           U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_UND,             U_CUT,             U_CPY,             &kp BSPC,          U_PST,             &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp PRCNT,         &kp HASH,          &kp SEMI,         &kp COLON,          &kp EXCL,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp AT,            &kp DLLR,          &kp LBRC,         &kp RBRC,           &kp PIPE,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp CARET,         &kp LBKT,         &kp RBKT,           &kp AMPS,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,         &kp RPAR,           &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_LAYER_NUM \
&kp ASTRK,         &kp N7,            &kp N8,            &kp N9,            &kp PLUS,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&euro_sign,         &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
