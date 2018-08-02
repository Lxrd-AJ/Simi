cc_library(
    name = "simi",
    # hdrs = [
    #     "simi/ops/random/random.h",
    #     "simi/ops/argmax/argmax.h",
    #     "simi/alg/bandit/simple_bandit.h",
    # ],#glob(["**/*.h"]),
    hdrs = glob(["**/*.h"]),
    # srcs = [
    #     "simi/ops/random/random.cc",
    #     "simi/ops/argmax/argmax.cc",
    #     "simi/alg/bandit/simple_bandit.cc",
    # ],#glob(["*.cc"]),
    srcs = glob(["**/*.cc"]),
    copts = ["-Iusr/include/eigen3/"],
    visibility = ["//visibility:public"], 
)
