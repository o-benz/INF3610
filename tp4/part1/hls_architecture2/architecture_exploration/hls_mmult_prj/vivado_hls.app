<project xmlns="com.autoesl.autopilot.project" name="hls_mmult_prj" top="mmult_hw">
    <includePaths/>
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow name="csim" ldflags="" mflags="" clean="true"/>
    </Simulation>
    <files xmlns="">
        <file name="../../mmult_test.cpp" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="mmult_accel.cpp" sc="0" tb="false" cflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution2_1" status="inactive"/>
        <solution name="solution2_2" status="active"/>
        <solution name="solution2_3" status="inactive"/>
    </solutions>
</project>

