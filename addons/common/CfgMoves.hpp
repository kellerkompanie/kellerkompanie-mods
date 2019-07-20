class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class AswmPercMstpSnonWnonDnon;
        class AsswPercMstpSnonWnonDnon;
        class AbswPercMstpSnonWnonDnon;
        class AswmPercMrunSnonWnonDf: AswmPercMstpSnonWnonDnon {
            speed = 0.5;
        };
        class AsswPercMrunSnonWnonDf: AsswPercMstpSnonWnonDnon {
            speed = 0.5;
        };
        class AbswPercMrunSnonWnonDf: AbswPercMstpSnonWnonDnon {
            speed = 0.4;
        };
    };
};
