#pragma once

enum colour {
    white,
    yellow,
    green,
    red,
    blue,
    orange,
    black,
};

enum elementType {
    corner_,
    edge_,
    centre_,
};

enum orientation {
    Straight,
    LeftSide,
    RightSide,
    FrontSide,
    BackSide,
    BottomSide,
};

enum rotation {
    NoRotation,
    UdRotation,
    LrRotation,
    ClockRotation,
};

enum desolver {
    RightRot,
    RightRrot,
    LeftRot,
    LeftRrot,
    UpRot,
    UpRrot,
    DownRot,
    DownRrot,
    ClockRrot,
    ClockLrot,
};
