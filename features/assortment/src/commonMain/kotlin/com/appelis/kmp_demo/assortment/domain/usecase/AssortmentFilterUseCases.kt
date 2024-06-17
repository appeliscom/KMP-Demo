package com.appelis.kmp_demo.assortment.domain.usecase

import com.appelis.kmp_demo.assortment.domain.model.AssortmentFilterSession
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.MutableStateFlow
import org.koin.core.annotation.Single

interface ObserveAssortmentFilterSessionUseCase {
    fun execute(filterSessionId: String): Flow<AssortmentFilterSession?>
}

interface SetAssortmentFilterSessionUseCase {
    fun execute(filterSession: AssortmentFilterSession)
}

@Single
class ObserveAssortmentFilterSessionUseCaseImpl(
    private val repository: FilterSessionRepository
) : ObserveAssortmentFilterSessionUseCase {
    override fun execute(filterSessionId: String): Flow<AssortmentFilterSession?> {
        return repository.filterSession
    }
}

@Single
class SetFilterSessionUseCaseImpl(
    private val repository: FilterSessionRepository
): SetAssortmentFilterSessionUseCase {
    override fun execute(filterSession: AssortmentFilterSession) {
        repository.filterSession.value = filterSession
    }
}


@Single
class FilterSessionRepository() {
    val filterSession: MutableStateFlow<AssortmentFilterSession?> = MutableStateFlow(null)
}