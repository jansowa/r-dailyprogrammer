package keprekarsRoutine;

import static org.junit.Assert.*;

import org.junit.Test;

public class KeprekarsRoutineTest {

	@Test
	public final void testLargest_digit() {
		assertEquals(KeprekarsRoutine.largest_digit(1234), 4);
		assertEquals(KeprekarsRoutine.largest_digit(3253), 5);
		assertEquals(KeprekarsRoutine.largest_digit(9800), 9);
		assertEquals(KeprekarsRoutine.largest_digit(3333), 3);
		assertEquals(KeprekarsRoutine.largest_digit(120), 2);
	}

	@Test
	public final void testDesc_digits() {
		assertEquals(KeprekarsRoutine.desc_digits(1234), 4321);
		assertEquals(KeprekarsRoutine.desc_digits(3253), 5332);
		assertEquals(KeprekarsRoutine.desc_digits(9800), 9800);
		assertEquals(KeprekarsRoutine.desc_digits(3333), 3333);
		assertEquals(KeprekarsRoutine.desc_digits(120), 2100);
	}

	@Test
	public final void testKeprekar() {
		assertEquals(KeprekarsRoutine.keprekar(6589), 2);
		assertEquals(KeprekarsRoutine.keprekar(5455), 5);
		assertEquals(KeprekarsRoutine.keprekar(6174), 0);
	}

}
