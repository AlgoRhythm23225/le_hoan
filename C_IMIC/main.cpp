#include <stdio.h>
#include <string.h>

typedef struct {
	char light;
	char fan;
	char motor;
} smartHome_t;

const char* data = "HTTP1.1 200 OK{"
"\"light\": \"on\","
"\"fan\" : \"off\","
"\"motor\" : \"off\"}";

char get_status(const char* keyword, const char* data) {
	const char* pos = strstr(data, keyword);
	if (pos) {
		const char* on_pos = strstr(pos, "\"on\"");
		if (on_pos && on_pos < strstr(pos, "}")) {
			return 1;
		}
	}
	return 0;
}

smartHome_t pair_data(const char* data) {
	smartHome_t result;
	result.light = get_status("light", data);
	result.fan = get_status("fan", data);
	result.motor = get_status("motor", data);
	return result;
}

void main() {
	smartHome_t x = pair_data(data);

	// In ra để kiểm tra kết quả
	printf("Light: %d\n", x.light);
	printf("Fan: %d\n", x.fan);
	printf("Motor: %d\n", x.motor);
}
