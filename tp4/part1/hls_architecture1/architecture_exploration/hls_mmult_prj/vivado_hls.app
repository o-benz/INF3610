<AutoPilot:project xmlns:AutoPilot="com.autoesl.autopilot.project" projectType="C/C++" name="hls_mmult_prj" top="mmult_hw">
    <files>
        <file name="../../mmult_test.cpp" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="mmult_accel.cpp" sc="0" tb="false" cflags="" blackbox="false"/>
    </files>
    <solutions>
        <solution name="solution1_1" status=""/>
    </solutions>
    <Simulation argv="">
        <SimFlow name="csim" setup="false" optimizeCompile="false" clean="true" ldflags="" mflags=""/>
    </Simulation>
</AutoPilot:project>

